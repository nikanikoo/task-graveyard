#include <iostream>
#include "3_reversest.h"

int main() {
    const int MAX_SIZE = 100;
    char str[MAX_SIZE];

    std::cout << "Vvedite stroku: ";
    std::cin.getline(str, MAX_SIZE);

    reverseArray(str);

    std::cout << "Reverse: " << str << std::endl;

    return 0;
}