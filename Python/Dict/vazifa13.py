baholar = {"Ali": 95, "Vali": 92, "Zara": 78, "Kamol": 90}

maks = list(baholar.keys())[0]

for baho in baholar.keys():
    if baholar[baho] > baholar[maks]:
        maks = baho

print(maks)
