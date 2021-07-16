# Найдите точку на декартовой координатной плоскости: к какому из четырех квадрантов принадлежит точка?
# Считайте из ввода два числа, не обязательно целых, первое число будет указывать положение по оси X, второе - по оси Y.
# Давайте продолжим называть квадранты римскими цифрами, как показано на рисунке.

# Если точка является началом координат (0, 0), выведите «It's the origin!».
# Если точка лежит на осях, либо x = 0, либо y = 0, выведите «One of the coordinates is equal to zero!».

# Sample Input 1:
# 3.987
# -10
# Sample Output 1:
# IV

def decart(x, y):
    if x > 0 < y: return 'I'
    elif x < 0 < y: return 'II'
    elif x < 0 > y: return 'III'
    elif x > 0 > y: return 'IV'
    else: return "It's the origin!"
    
print(decart(float(input()), float(input())))
