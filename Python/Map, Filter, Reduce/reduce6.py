from functools import reduce

sonlar = [3,9,2,7]
engKatta = reduce(lambda a,b: a if a>b else b,sonlar)
print(engKatta)
