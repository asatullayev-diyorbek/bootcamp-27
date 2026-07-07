contacts = {}

for i in range(2):
    ism = input("Ism: ")
    phone = input("Phone: ")
    contacts[ism] = phone

print(contacts)
name = input("Ism: ")

if name in contacts.keys():
    print(contacts[name])
else:
    print("Bunday kontakt mavjud emas")
