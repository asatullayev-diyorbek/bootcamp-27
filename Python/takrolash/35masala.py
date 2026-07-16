
musbat = 0
manfiy = 0
while True:
    son = int(input("Son : "))

    if son == 0:
        break
    elif son > 0:
        musbat +=1
    else:
        manfiy += 1
print(f"Musbat sonlar : {musbat} ta")
print(f"Manfiy sonlar: {manfiy} ta")

