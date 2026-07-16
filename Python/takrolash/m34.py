from functools import reduce
sonlar = [1,2,3,4,5]
kup = reduce(lambda a,b:a*b,sonlar)
print(kup)