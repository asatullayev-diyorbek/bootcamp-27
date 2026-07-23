talabalar = [
    {"ism": "Bek",  "baho": 98},
    {"ism": "Ali",  "baho": 82},
    {"ism": "Zara", "baho": 96},
    {"ism": "Vali", "baho": 76},
]

is_sorted = False
while not is_sorted:
    is_sorted = True
    for i in range(len(talabalar)-1):
        if talabalar[i]['baho'] < talabalar[i+1]['baho']:
            talabalar[i], talabalar[i+1] = talabalar[i+1], talabalar[i]
            is_sorted = False

print(*talabalar, sep='\n')

