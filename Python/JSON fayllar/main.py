import json
import pprint

file = "Python/JSON fayllar/data.json"

# json dan o'qish
with open(file, 'r') as f:
    contact = json.load(f)
    print(contact)

talabalar = [
 {"ism": "Ali", "baho": 90},
 {"ism": "Vali", "baho": 85},
 {"ism": "Zara", "baho": 95} ]

# json ga yozish
with open("talabalar.json", "w") as f:
 json.dump(talabalar, f, indent=4)