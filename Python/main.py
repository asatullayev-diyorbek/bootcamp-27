# # print()
# # sep=" " - elementlar orasini ajratib turuvchi belgi
# # end="\n" - qator oxiridagi belgi
# print("Hello world!", end="; ")
# print(234355)
# print(12, 45, 67, 89, 15, 56, sep=", ")

# # input()
# ism = input("Ismingizni kiriting: ")
# print("Salom", ism)

# # type()
# print(type(ism))

# # int - int(data) ma'lumot turini int ga o'tkazish
# son = 10
# print(son)
# print(type(son))

# number = int(input("Sonni kiriting: "))
# print(number)
# print(type(number))
# print("Ko'paytirish: ", number * son)
# print("Bo'lish: ", number / son)
# print("Qo'shish: ", number + son)
# print("Ayirish: ", number - son)

# print("Qoldiq: ", number % son)
# print("Daraja: ", number**2)
# print("Daraja: ", number**3)
# print("Daraja: ", number**4)

# print("Ildiz: ", number**0.5)
# print("Ildiz: ", number**(1/3))

# print(0.1+0.2)
# print(0.7+0.2) # Decimal

# # from decimal import Decimal
# # print(Decimal("0.2")+Decimal("0.7"))


# # float
# pi = 3.14
# print(pi)
# print(type(pi))

# son = float(input("Sonni kiriting: "))
# print(son, type(son))


# # str - string
# ism = "Eshmat"
# familiya = input()
# print(ism, familiya)
# matn = "A va B (A > B) musbat 🔥ыћыsonlar berilgan. A kesmada B kesmani necha marta joylashtirish mumkin. A kesmada B kesmaning joylashmagan qismini aniqlovchi dastur tuzing."

# print(matn.capitalize())
# print(matn.count("o"))
# print(matn.endswith("zing."))
# print(matn.startswith("A va"))
# print(matn.find("o", 25))
# print(matn[::-1].find("o"))
# print(matn.replace("A", "C", 2))

# print(matn.isascii())
# print("4.7".isdigit())
# print(matn.isprintable())

# matn = "A kesmada B kesmani necha marta joylashtirish mumkin."
# soni = 0

# for belgi in matn:
#     soni += belgi.isupper()

# print("Katta harflar soni:", soni, "ta")

# matn2 = "Katta harflar soni: " + str(soni) + " ta"

# print(f"Katta harflar soni: {soni} ta")
# print(matn2)

# matn = 'hello world'
# matn2 = 'Sotvoldihoji hammaga "ChatGPT zor" dedi'
# country = 'O\'zbekiston'
# country2 = "O'zbekiston"

son=2

if son > 4:
    print("Son 4dan katta")
elif son==0:
    print("Son 0ga teng")
