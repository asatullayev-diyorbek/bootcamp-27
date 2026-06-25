"""
Berilgan satr ichidagi raqamlar yig'indisini hisoblang!
"""

matn = input("Matinni kiriting: ")
son = 0
for g in matn:
    if 48 <= ord (g) <= 57:
        son += ord(g)-48

print(son)
