# Есть несколько оценок, которые вы можете получить в тесте: A, B, C, D, F. Процентное соотношение:

# А: 90-100%
# B: 80-90%
# С: 70-80%
# D: 60-70%
# F: <60%

# Определите оценку, которую получит учащийся, на основе оценки учащегося и максимальной оценки.
# Обратите внимание, что верхний предел не входит в диапазон, за исключением оценки A. Например,
# ученик с 60% получит D, с 70% или 79,9% - C, но наивысший балл 100% - это просто A.

# Формат ввода:
# Две строчки: первая с баллом ученика и вторая с максимумом.
# Формат вывода:
# Оценка ученика

# Sample Input 1:
# 75
# 100
# Sample Output 1:
# C

# Sample Input 2:
# 100
# 200
# Sample Output 2:
# F

percent = float(input()) / float(input()) * 100

if percent > 90: print('A')
elif 90 > percent >= 80: print('B')
elif 80 > percent >= 70: print('C')
elif 70 > percent >= 60: print('D')
elif 60 > percent: print('F')
