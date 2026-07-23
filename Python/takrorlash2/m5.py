from functools import reduce

def uzun_soz(soz1, soz2):
    return soz1 if len(soz1) > len(soz2) else soz2

matn = input("Matn kiriting: ")

sozlar = matn.split(' ')

uzun = reduce(uzun_soz, sozlar)
uzun2 = reduce(lambda soz1, soz2: soz1 if len(soz1) > len(soz2) else soz2, sozlar)

print(uzun)
print(uzun2)
