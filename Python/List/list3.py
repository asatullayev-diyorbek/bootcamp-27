n = int(input("n son kriting:  "))

sonlar = []
sum = 0
for i in range(n):
    son = int(input(f"{i+1}-son kriting: "))
    sonlar.append(son)   
for son in sonlar:
    print(son)
    sum+=son
print("orta_arifmetikgi", sum/n)
    
  

  