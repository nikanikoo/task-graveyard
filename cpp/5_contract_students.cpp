#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <windows.h>
#include <iomanip>

using namespace std;

class CSTUDENT {
protected:
    string fio;
    string group;
    int grades[4];

public:
    CSTUDENT() {}
    virtual ~CSTUDENT() {}
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
        for (int i = 0; i < 4; i++) {
            file >> grades[i];
        }
        file >> recordBookNum >> isContract >> scholarship;
        return true;
    }

    bool getIsContract() const { return isContract; }
    string getFio() const { return fio; }
    string getGroup() const { return group; }
};

int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    const int STUDENT_COUNT = 10;
    vector<CSTUDENT_NEW> students(STUDENT_COUNT);

    ifstream inputFile("5_students.txt");

    if (!inputFile) {
        cerr << "Ошибка: Не удалось открыть файл students.txt" << endl;
        return 1;
    }

    for (int i = 0; i < STUDENT_COUNT; i++) {
        if (!students[i].readFromFile(inputFile)) {
            cout << "Предупреждение: В файле меньше 10 записей или данные некорректны." << endl;
            students.resize(i);
            break;
        }
    }
    inputFile.close();

    cout << "Список студентов-контрактников:" << endl;
    cout << "---------------------------------------" << endl;
    cout << left << setw(20) << "Фамилия" << " | " << "Группа" << endl;
    cout << "---------------------------------------" << endl;

    bool found = false;
    for (const auto& student : students) {
        if (student.getIsContract()) {
            cout << left << setw(20) << student.getFio()
                << " | " << student.getGroup() << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Студенты, обучающиеся на контрактной основе, не найдены." << endl;
    }

    return 0;
}