from functools import reduce
royhat = []
for sonlar in range(5):
    sonlar = int(input("son:"))
    royhat.append(sonlar)
katta = reduce(lambda a , b: a if a>b else b, royhat)

kichik = reduce(lambda a , b: a if a<b else b, royhat)

print(f"kattasi {katta}  kichigi{kichik}")