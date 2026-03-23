#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <windows.h>

using namespace std;
class CSTUDENT_NEW;

class CSTUDENT {
protected:
    string fio;
    string group;
    int grades[4];

public:
    CSTUDENT() {}
    virtual ~CSTUDENT() {}

    string getFio() const { return fio; }
    string getGroup() const { return group; }

    virtual void FILTR(const vector<CSTUDENT_NEW>& list);
};

class CSTUDENT_NEW : public CSTUDENT {
private:
    string recordBookNum;
    bool isContract;
    double scholarship;

public:
    CSTUDENT_NEW() : CSTUDENT() {}

    bool readFromFile(ifstream& file) {
        if (!(file >> fio >> group)) return false;
        for (int i = 0; i < 4; i++) file >> grades[i];
        file >> recordBookNum >> isContract >> scholarship;
        return true;
    }

    bool getIsContract() const { return isContract; }
    string getRecordBookNum() const { return recordBookNum; }

    void FILTR(const vector<CSTUDENT_NEW>& list) override;
};

void CSTUDENT::FILTR(const vector<CSTUDENT_NEW>& list) {
    cout << "\nСписок студентов-контрактников:" << endl;
    bool found = false;
    for (const auto& s : list) {
        if (s.getIsContract()) {
            cout << "ФИО: " << setw(15) << left << s.getFio()
                << " Группа: " << s.getGroup() << endl;
            found = true;
        }
    }
    if (!found) cout << "Контрактники не найдены." << endl;
}

void CSTUDENT_NEW::FILTR(const vector<CSTUDENT_NEW>& list) {
    string searchID;
    cout << "\nВведите шифр зачетки для поиска: ";
    cin >> searchID;

    bool found = false;
    for (const auto& s : list) {
        if (s.getRecordBookNum() == searchID) {
            cout << "Найден студент: " << s.getFio()
                << ", Группа: " << s.getGroup() << endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "Студент с зачеткой " << searchID << " не найден." << endl;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    vector<CSTUDENT_NEW> students(10);
    ifstream inputFile("5_students.txt");

    if (!inputFile) {
        cerr << "Ошибка: Не удалось открыть файл students.txt" << endl;
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        if (!students[i].readFromFile(inputFile)) {
            students.resize(i);
            break;
        }
    }
    inputFile.close();

    CSTUDENT* ptr = nullptr;

    CSTUDENT baseObj;
    ptr = &baseObj;
    ptr->FILTR(students);

    CSTUDENT_NEW derivedObj;
    ptr = &derivedObj;
    ptr->FILTR(students);

    return 0;
}