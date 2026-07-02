def bormi(sonlar, son):
    if len(sonlar) == 0:
        return False
    
    return sonlar[0] == son  or  bormi(sonlar[1:], son)

print(bormi([1,4,5,6,7,3,2,4,5], 8))
