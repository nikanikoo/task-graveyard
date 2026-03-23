#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

bool hasTwoDigitNumber(const std::string& s) {
    int count = 0;
    for (size_t i = 0; i <= s.length(); ++i) {
        if (i < s.length() && std::isdigit(s[i])) {
            count++;
        }
        else {
            if (count == 2) return true;
            count = 0;
        }
    }
    return false;
}

int main() {
    std::ifstream file("2_input.txt");
    std::string line;

    if (!file.is_open()) return 1;

    while (std::getline(file, line)) {
        if (hasTwoDigitNumber(line)) {
            std::cout << line << std::endl;
        }
    }

    file.close();
    return 0;
}