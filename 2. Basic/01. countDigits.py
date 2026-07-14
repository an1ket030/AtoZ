#brute:

def count_digit(n):
    if n == 0:
        return 1

    count = 0

    while n > 0:
        n //= 10
        count += 1

    return count


n = 123456
print(count_digit(n))


#optimized:

import math

def count_digit(n):
    if n == 0:
        return 1

    digits = math.floor(math.log10(n) + 1)
    return digits


n = 123456
print(count_digit(n))