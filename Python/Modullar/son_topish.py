import random

son = random.randint(1,100)
urinish = 0
while urinish < 5:
    taxmin = input("O'ylangan sonni taxmin qiling: ")

    if not taxmin.isdigit():
        print("Son kiriting")
        continue

    urinish += 1
    taxmin = int(taxmin)

    if taxmin == son:
        print(f"Siz o'ylangan sonni {urinish} ta urinishda topdingiz! Son: {taxmin}")
        break
    elif taxmin > son:
        print("O'ylangan son kichikroq")
    else:
        print("O'ylangan son kattaroq")
else:
    print("Imkoniyatlar tugadi! Yutqazdingiz!")
    print(f"O'ylangan son: {son}")
