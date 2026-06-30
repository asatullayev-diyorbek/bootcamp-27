def kvadrat(son):
    return son*son

kv = lambda son: son*son
qushish = lambda a, b: [a+b, a-b]
kattami = lambda a, b: ("Katta" if a>b else "Kichik")

print(kvadrat(5))
print(kv(6))
print(qushish(6, 8))
print(kattami(6, 4))