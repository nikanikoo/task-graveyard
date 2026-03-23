#include "3_reversest.h"
#include <cstring>

void reverseArray(char* arr) {
    int n = std::strlen(arr);
    for (int i = 0; i < n / 2; ++i) {
        char temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}