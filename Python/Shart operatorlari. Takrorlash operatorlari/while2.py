balans = int(input("Balans: "))
avans = int(input("Olinadigan miqdor: "))

if balans / 2 >= avans:
    print("Cheksiz")
else:
    soni = 0
    while balans >= avans:
        balans -= avans
        soni += 1
        balans *= 2
    print(f"Foydalanishlar soni: {soni} ta\nQoldiq: {balans} so'm")
