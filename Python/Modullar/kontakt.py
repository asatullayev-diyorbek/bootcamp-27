file = "Python/Modullar/kontakt.txt"
# ism,raqam
contacts = []
def seprate(line):
    ism, raqam = line.split(",")
    return {
        "ism": ism,
        "raqam": raqam.strip("\n")
    }

with open(file=file, mode='r+') as f:
    contacts = list(map(seprate, f.readlines()))


def add_contact():
    global contacts
    print("*** Kontakt qo'shish ***")
    ism = input("Ism kiriting: ")
    raqam = input("Telefon raqamni kiriting: ")
    new = {
        "ism": ism,
        "raqam": raqam
    }
    contacts.append(new)
    with open(file=file, mode='a') as f:
        f.write(f"{ism},{raqam}\n")
    print("Kontakt qo'shildi!\n\n")


def search_contact():
    global contacts
    print("*** Kontakt qidirish ***")
    matn = input("Qidiruv matni: ")
    count = 0
    # Ali, ali, aLi,ALI -> ali;
    # Alijon, Alibek, Muhammadali -> %ali%
    for contact in contacts:
        if matn.lower() in contact['ism'].lower() or matn.lower() in contact['raqam'].lower():
            print(f"{contact['ism']} - {contact['raqam']}")
            count += 1
    print(f"{count} ta kontakt topildi\n\n")


def all_contacts():
    global contacts
    for i, contact in zip(range(1, len(contacts)+1), contacts):
        print(f"{i}. {contact['ism']} - {contact['raqam']}")
    print(f"{len(contacts)} ta kontakt\n\n")


def edit_contact():
    global contacts
    for i, contact in zip(range(1, len(contacts)+1), contacts):
        print(f"{i}. {contact['ism']} - {contact['raqam']}")
    index = int(input("Kontakt tartib raqamini tanlang: ")) - 1
    ism = input("Ism kiriting yoki o'tkazib yuboring: ")
    raqam = input("Raqam kiriting yoki o'tkazib yuboring: ")

    contacts[index] = {
        "ism": ism if ism else contacts[index]['ism'],
        "raqam": raqam if raqam else contacts[index]['raqam']
    }
    with open(file=file, mode="w") as f:
        for contact in contacts:
            f.write(f"{contact['ism']},{contact['raqam']}\n")
    print("Tahrirlandi\n\n")


# print(contacts)

while True:
    print(
        "1 —Kontakt qo'shish (ism, telefon)\n" \
        "2 —Kontakt qidirish (ism bo'yicha)\n" \
        "3 —Barcha kontaktlarni ko'rish\n" \
        "4 -Tahrirlash\n"
        "5 —Chiqish (va faylga saqlash)\n"
    )
    menu = input("Menuni tanlang: ")

    if menu == '5':
        print("Dasturdan chiqildi!")
        break
    if menu == '1':
        add_contact()
    elif menu == '2':
        search_contact()
    elif menu == '3':
        all_contacts()
    elif menu == '4':
        edit_contact()