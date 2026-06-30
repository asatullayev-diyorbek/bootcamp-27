# range(start, stop, step)

# start - boshlanishi; default=0
# stop - oxiri (oxirgi son kirmaydi); default=majburiy
# step - qadamlar uzunligi; default=1

# a = list(range(10, 0, -2))

# print(a)


# a va b butun sonlar berilgan. a dan b gacha (b ham) sonlarni 2qadamlab chiqaring
a = int(input("a="))
b = int(input("b="))

for son in range(a, b+1, 2):
    print(son)
    if son == 15:
        break
else:
    print("Hammasi chotki")

