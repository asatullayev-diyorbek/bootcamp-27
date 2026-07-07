from functools import reduce

sonlar = [3, 5, 4, 31, 6]

yigindi = reduce(lambda a, b: a+b, sonlar)
katta = reduce(lambda a, b: a if a>b else b, sonlar)
print(yigindi)
print(katta)





savatcha = [
    {
        "nomi": "Non",
        "narxi": 5000,
        "soni": 4
    },
    {
        "nomi": "Kitob - Atom odatlari",
        "narxi": 65000,
        "soni": 1
    },
]

def summa(a, mahsulot):
    return a + mahsulot['narxi'] * mahsulot['soni']

# jami_summa = reduce(summa, savatcha, 0)
jami_summa = reduce(
                lambda a, mahsulot: a + mahsulot['narxi'] * mahsulot['soni'], 
                savatcha, 
                0
            )

print(jami_summa)