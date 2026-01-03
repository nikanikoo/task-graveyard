#include <iostream>

using namespace std;

int main() {
    srand(time(0));
    int number_guess = rand() % (100 + 1 - 1) + 1;
    int user_guess;
    int attempts = 0;
    cout << "Я загадал число от 1 до 100. Угадайте его!" << endl;
    while (true) {
        cout << "Введите число: " << endl;
        cin >> user_guess;
        attempts++;
        if (user_guess < number_guess) {
            cout << "Слишком мало!" << endl;
        } else if (user_guess > number_guess) {
            cout << "Слишком много!" << endl;
        } else {
            cout << "Вы угадали за " << attempts << " попыток!" << endl << "Хотите сыграть еще раз? (y/n)" << endl;
            char play_again;
            cin >> play_again;
            if (play_again != 'y') {
                cout << "До свидания!" << endl;
                break;
            } else {
                attempts = 0;
            }
        }
    }
    return true;
}