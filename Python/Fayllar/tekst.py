# matnli fayllar
# f = open("Python/Fayllar/sher.txt", 'r')

# for line in f.readlines():
#     print(line, end='')

# f.close()

# with open("Python/Fayllar/sher.txt", 'r') as sher:
#     print(sher.readlines())

# matn = input("Matn kiriting: ")

# with open("Python/Fayllar/matn.txt", 'a') as f:
#     # f.write(matn)
#     f.writelines(matn+'\n')

# file_name = "Python/Fayllar/sonlar.txt"
# # file_name = "son.txt"

# with open(file=file_name, mode='r') as f:
#     sonlar = f.readline()
#     print(type(sonlar))
#     sonlar_int = list(map(int, sonlar.split(",")))
#     print(sonlar_int)
#     print(sum(sonlar_int))

savatcha = [
    {
        "nomi": "Non",
        "narxi": 5000,
        "soni": 4
    },
    {
        "nomi": "Kitob - Atom odatlari",
        "narxi": 65000,
        "soni": 1
    },
    {
        "nomi": "Telefon",
        "narxi": 5000000,
        "soni": 1
    },
]

file_name = "Python/Fayllar/savatcha.txt"
with open(file_name, 'a') as f:
    for m in savatcha:
        # f.write(m['nomi'] + "|||" + m['narxi'] + "|||" + m['soni'] + "\n")
        f.write(m['nomi'])
        f.write("|||")
        f.write(str(m['narxi']))
        f.write("|||")
        f.write(str(m['soni']))
        f.write("\n")
    print("Saqlandi")