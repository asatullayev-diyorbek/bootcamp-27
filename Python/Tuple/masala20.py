n=int(input("n= "))
sonlar=[]
for i in range(n):
    son=int(input(f"{i+1}-son "))
    sonlar.append(son)
count = 0
for i in range(n-1):
    if sonlar[i]<sonlar[i+1]:
        count+=1
if count == n-1:
    print("O'suvchi")
elif count == 0:
    print("kamayuvchi")
else:
    print("aralash")