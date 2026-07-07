ismlar = ["Ali", "Vali", "Ali", "Zara", "Vali"]
natija = {}

for ism in ismlar:
    natija[ism] = natija.get(ism, 0) + 1
    # if ism in natija.keys():
    #     natija[ism] += 1
    # else:
    #     natija[ism] = 1

print(natija)
