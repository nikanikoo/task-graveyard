# C++ Programs

### 1_guess_number.cpp — Number Guessing Game / Игра "Угадай число"

**English:**
A game where generates a random number from 1 to 100, and the user tries to guess it. The program provides hints ("too low" or "too high") and counts attempts. Offers to play again after each successful guess.

**Русский:**
Игра, в которой загадывается случайное число от 1 до 100, а пользователь пытается его угадать. Программа даёт подсказки ("слишком мало" или "слишком много") и подсчитывает количество попыток. После каждой успешной попытки предлагает сыграть ещё раз.

---

### 2_two_digit_filter.cpp — Two-Digit Number Filter / Фильтр двузначных чисел

**English:**
Reads lines from `2_input.txt` and prints only those lines that contain a two-digit number (exactly two consecutive digits).

**Русский:**
Считывает строки из файла `2_input.txt` и выводит только те строки, которые содержат двузначное число (ровно две последовательные цифры).

---

### 3_reverse_string.cpp — String Reverser / Переворот строки

**English:**
Prompts the user to enter a string, then reverses it using the `reverseArray()` function from `3_reversest.cpp` and displays the result.

**Русский:**
Запрашивает у пользователя ввод строки, затем переворачивает её с помощью функции `reverseArray()` из `3_reversest.cpp` и отображает результат.

**Dependencies / Зависимости:** `3_reversest.cpp`, `3_reversest.h`

---

### 3_reversest.cpp / 3_reversest.h — String Reversal Utility / Утилита переворота строки

**English:**
A utility module that provides the `reverseArray()` function to reverse a C-style string in place.

**Русский:**
Модуль утилиты, предоставляющий функцию `reverseArray()` для переворота C-строки на месте.

**Files / Файлы:**
- `reversest.h` — Header file with function declaration / Заголовочный файл с объявлением функции
- `reversest.cpp` — Main file / Основной файл

---

### 4_cube_volume.cpp — Cube Volume Calculator / Калькулятор объёма куба

**English:**
Demonstrates class usage with direct (`.`) and pointer (`->`) access. Creates a `Cube` object and calculates its volume using both access methods.

**Русский:**
Демонстрирует использование класса с прямым доступом (`.`) и через указатель (`->`). Создаёт объект `Cube` и вычисляет его объём обоими способами.

---

### 5_contract_students.cpp — Contract Students List / Список студентов-контрактников

**English:**
Reads student data from `5_students.txt` and displays a formatted list of students studying on a contract basis (paid education). Uses class inheritance with `CSTUDENT` base class and `CSTUDENT_NEW` derived class.

**Русский:**
Читает данные студентов из `5_students.txt` и отображает форматированный список студентов, обучающихся на контрактной основе (платное образование). Использует наследование классов с базовым классом `CSTUDENT` и производным классом `CSTUDENT_NEW`.

**Input file / Входной файл:** `5_students.txt`

---

### 6_student_filter_polymorph.cpp — Polymorphic Student Filter / Полиморфный фильтр студентов

**English:**
Demonstrates polymorphism with virtual functions. Provides two filtering modes:
1. List all contract students (base class method)
2. Search for a student by record book number (derived class method)

Uses runtime polymorphism through a base class pointer.

**Русский:**
Демонстрирует полиморфизм с виртуальными функциями. Предоставляет два режима фильтрации:
1. Список всех студентов-контрактников (метод базового класса)
2. Поиск студента по номеру зачётки (метод производного класса)

Использует полиморфизм времени выполнения через указатель базового класса.

**Input file / Входной файл:** `5_students.txt`