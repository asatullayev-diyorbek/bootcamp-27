a, b, c = map(int, input("Sonlarni kiriting: ").split())

if a <= b <= c or a >= b >= c:
    a *= 2; b *= 2; c *= 2
else:
    a *= -1
    b *= -1
    c *= -1

print(a, b, c)