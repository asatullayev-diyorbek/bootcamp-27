def factorial(son):
    faktorial = 1
    for i in range(1, son+1):
        faktorial *= i
    return faktorial

def r_factorial(son):
    if son == 1:
        return 1
    return son * r_factorial(son-1)

def raqamlar_yigindisi(n):
    if n == 0:
        return 0
    return n % 10 + raqamlar_yigindisi(n // 10)

def polindrome(s, start=0, end=None):
    if end==None:
        end = len(s)-1

    if start > end:
        return True
    return s[start] == s[end] and polindrome(s, start+1, end-1)


soz = "kiyiklar"
print(polindrome(soz))
