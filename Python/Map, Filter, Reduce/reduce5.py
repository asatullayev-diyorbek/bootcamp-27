from functools import reduce

sonlar= [2,3,5,7]
kopaytma= reduce (lambda a,b: a*b,sonlar)
print(kopaytma)