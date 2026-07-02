n = int(input("n= "))
sonlar=[]

for i in range(1,n+1):
    son=int(input(f"{i}-son: "))
    sonlar.append(son)
sorted=False
print("O'sish tartibida sortlandi: ")
while not sorted:
    sorted=True
    for i in range(n-1):
        if sonlar[i]>sonlar[i+1]:
            sorted=False
            temp=sonlar[i]
            sonlar[i]=sonlar[i+1]
            sonlar[i+1]=temp
print(*sonlar)