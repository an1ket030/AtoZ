#brute:

def gcd(n1, n2):
    ans = 1

    for i in range(1, min(n1, n2) + 1):
        if n1 % i == 0 and n2 % i == 0:
            ans = i

    return ans


n1 = 12
n2 = 18

print(gcd(n1, n2))


#optimized:

def gcd(n1, n2):

    while n2 != 0:
        rem = n1 % n2
        n1 = n2
        n2 = rem

    return n1


n1 = 12
n2 = 18

print(gcd(n1, n2))