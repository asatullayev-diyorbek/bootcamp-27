n = int(input("n="))
sonlar = []

for i in range(1, n+1):
    son = int(input(f"{i}-son = "))
    sonlar.append(son)

sum = 0
for son in sonlar:
    sum += son

print(f"Yig'indi: {sum}")