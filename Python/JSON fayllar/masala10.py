import json

f_a = open("Python/JSON fayllar/a.json")
f_b = open("Python/JSON fayllar/b.json")
data_a = json.load(f_a)
data_b = json.load(f_b)
f_a.close()
f_b.close()

print(data_a)
print(data_b)

for talaba in data_a:
    print(f"{talaba['ism']} - {talaba['baho']}")


for talaba in data_b:
    if not talaba['ism'] in [t['ism'] for t in data_a]: # ['ali', 'vali', 'zara']
        print(f"{talaba['ism']} - {talaba['baho']}")

# sonlar = [a['ism'] for a in [{'ism':"vali"}, {'ism':"ali"}]]

# print(sonlar)