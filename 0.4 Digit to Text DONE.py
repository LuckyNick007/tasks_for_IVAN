# Вот ваш шанс написать инструкции для системы преобразования текста в речь.
# Давайте сосредоточимся на чтении телефонных номеров вслух.
# Введенный номер телефона будет состоять исключительно из цифр.
# Выведите название каждой цифры в новой строке, чтобы система могла прочитать их одну за другой.

# Sample Input 1:
# 12345

# Sample Output 1:
# one
# two
# three
# four
# five

num = input()
voice = ['zero', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine']
for n in num:
    print(voice[int(n)])
