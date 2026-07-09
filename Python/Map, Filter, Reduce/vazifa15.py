from functools import reduce

qiymat = [("Ali", 90), ("Vali", 78), ("Zara", 95)]

def ajratish(ismlar: list, ball: tuple):
    if ball[1] >= 85:
        ismlar.append(ball[0].upper())
    return ismlar

natija = list(reduce(ajratish, qiymat, []))
print(natija)
