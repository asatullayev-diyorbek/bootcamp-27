def raqamlar_son(n):
    if n==0:
        return 0
    return 1+raqamlar_son(n//10)
print(raqamlar_son(123456789))