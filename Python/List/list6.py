n = int(input("N="))
sonlar = []
for i in range(1,n+1):
    son = int(input(f"{i}-son="))
    sonlar.append(son)

for i in range(n//2):
    temp = sonlar[i]
    sonlar[i] = sonlar[-i-1]
    sonlar[-i-1] = temp

print(sonlar)
