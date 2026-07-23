with open("Python/takrorlash2/hisoblagich.txt", "r") as f:
    matn = f.read()

with open("Python/takrorlash2/hisoblagich.txt", "w") as f:
    son = int(matn) if matn.isdigit() else 0
    f.write(f"{son+1}")

print(son+1)