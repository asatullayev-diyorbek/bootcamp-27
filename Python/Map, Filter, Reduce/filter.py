sonlar = [1,2,3,4,5]
juft = list(filter(lambda x: x %2==0,sonlar))
kvadirati = list(map(lambda x: x**2,juft ))
print(juft)
print(kvadirati)