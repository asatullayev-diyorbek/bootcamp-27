def kvadrat(n):
    return n**2

def kub(n):
    return n**3

print("Son  | Kvadrat  | Kub")
print("-----|----------|-----") # 5, 10, 5

for i in range(1, 15):
    kv = kvadrat(i)
    _kub = kub(i)
    print(
            i, " " * (5-len(str(i))), "|",
            kv, " " * (10-len(str(kv))), "|",
            _kub, " " * (5-len(str(_kub))), sep=""
        )