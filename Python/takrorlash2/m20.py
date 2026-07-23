talabalar = [
    {"ism": "Ali",  "baho": 82},
    {"ism": "Vali", "baho": 76},
    {"ism": "Zara", "baho": 96},
    {"ism": "Bek",  "baho": 98},
]

def oshirish(talaba):
    talaba['baho'] += min(100-talaba['baho'], 5)
    # if talaba['baho'] <= 95:
    #     talaba['baho'] += 5
    # else:
    #     talaba['baho'] = 100
    return talaba

talabalar = list(map(oshirish, talabalar))

print(talabalar)