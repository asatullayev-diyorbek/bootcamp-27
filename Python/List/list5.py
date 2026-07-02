n = int (input("n = "))
sonlar = []
soni = 0
for i in range(n):
   son = int(input(f"{i + 1} - sonni kiriting: "))
   sonlar.append(son)
sum=0
for son in sonlar:
   if son % 2 == 1:
      soni += 1
      sum=son+sum

      
print ("toq sonlar yigindisi: ",sum )
      


