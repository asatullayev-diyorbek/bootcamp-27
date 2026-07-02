n = int (input("n = "))
sonlar = []
soni = 0
for i in range(n):
   son = int(input(f"{i + 1} - sonni kiriting: "))
   sonlar.append(son)

for son in sonlar:
   if son > 0:
      soni += son
print ("musbat: ",soni )
