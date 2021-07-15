# Напишем простой калькулятор! Он будет читать 3 строки:

# первое число
# второй номер
# арифметическая операция.
# Числа - плавающие!

# Выходные данные являются результатом следующего: first_number операции second_number.

# Доступны следующие операции: +, -, /, *, mod, pow, div.
# mod - операция по модулю, т.е. остаток от деления first_number % second_number,
# pow - возведение в степень, первое число будет основанием, второе - степенью: first_number ** second_number,
# div - целочисленное деление first_number // second_number.

# Обратите внимание, что если второе число равно 0 и вы хотите выполнить любую из операций /, mod или div,
# калькулятор должен сказать «Division by 0!»

# Sample Input 1:
# 5.0
# 0.0
# mod
# Sample Output 1:
# Division by 0!

# Sample Input 2:
# -12.0
# -8.0
# *
# Sample Output 2:
# 96.0

# Sample Input 3:
# 5.0
# 10.0
# /
# Sample Output 3:
# 0.5

num1, num2, oper = float(input()), float(input()), input()

def main(a, b, oper):
    if oper == '+': return a + b
    elif oper == '-': return a - b
    elif oper == '/': return 'Division by 0!' if b == 0 else a / b
    elif oper == '*': return a * b
    elif oper == 'mod': return 'Division by 0!' if b == 0 else a % b
    elif oper == 'pow': return a ** b
    elif oper == 'div': return 'Division by 0!' if b == 0 else a // b
    else: return 'Wrong operator!'

print(main(num1, num2, oper))
