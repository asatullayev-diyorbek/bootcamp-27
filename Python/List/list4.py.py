n = int (input("n = "))
sonlar = []
soni = 0
for i in range(n):
   son = int(input(f"{i + 1} - sonni kiriting: "))
   sonlar.append(son)
for son in sonlar:
   if son % 2 == 0:
      soni += 1
print ("juft sonlar soni: ",soni )
      


