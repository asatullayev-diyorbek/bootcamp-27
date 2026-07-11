from pprint import pprint

file_name = "Python/Fayllar/savatcha.txt"
savatcha = []
with open(file_name, 'r') as f:
    for line in f.readlines():
        print(line)
        nomi, narxi, soni = line.split("|||")
        mahsulot = {
            "nomi": nomi,
            "narxi": int(narxi),
            "soni": int(soni)
        }
        savatcha.append(mahsulot)

pprint(savatcha)
