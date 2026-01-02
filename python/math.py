while (True):
    try:
        a = float(input("Введите первое число: "))
        b = float(input("Введите второе число: "))
        p = input("Введите операцию (+, -, *, /, ^, %): ")
    except ValueError:
        print("Ошибка: Введите корректные числовые значения!")
        continue

    if p == "+":
        print(f"Результат: {a + b}")

    elif p == "-":
        print(f"Результат: {a - b}")

    elif p == "*":
        print(f"Результат: {a * b}")

    elif p == "/":
        if b != 0:
            print(f"Результат: {a / b}")
        else:
            print("Ошибка: Деление на ноль невозможно!")

    elif p == "^":
        print(f"Результат: {pow(a, b)}")

    elif p == "%":
        if b != 0:
            print(f"Результат: {a % b}")
        else:
            print("Ошибка: Деление на ноль невозможно!")

    else:
        print("Ошибка: Неизвестная операция!")

    cont = input("Хотите продолжить? (y/n): ").lower()
    if cont != 'y':
        break
