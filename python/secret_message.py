def encrypt(message, shift):
    encrypted_message = ""
    for char in message:
        if char.isalpha():
            shift_base = ord('а') if char.islower() else ord('А')
            encrypted_char = chr((ord(char) - shift_base + shift) % 32 + shift_base)
            encrypted_message += encrypted_char
        else:
            encrypted_message += char
    return encrypted_message

def decrypt(message, shift):
    return encrypt(message, -shift)

choose = input("Вы хотите зашифровать или расшифровать сообщение? (з/р): ")
if choose.lower() == 'з':
    # зашифровка сообщения
    message_a = input("Введите сообщение: ")
    number_a = int(input("Введите число сдвига: "))
    message = encrypt(message_a, number_a)
    print("Зашифрованное сообщение:", message)

elif choose.lower() == 'р':
    # дешифровка сообщения
    message_a = input("Введите зашифрованное сообщение: ")
    number_a = int(input("Введите число сдвига: "))
    message = decrypt(message_a, number_a)
    print("Расшифрованное сообщение:", message)