def maksimal(sonlar: list):
    if len(sonlar) == 1:
        return sonlar[0]
    
    next = maksimal(sonlar[1:])
    if sonlar[0] > next:
        return sonlar[0]
    return next

sonlar = [3, 7, 8, 9, 12, 14, 21, 4]

# 3 > next(7 > next(8 > next(...21 > next(4))))

print(maksimal(sonlar))