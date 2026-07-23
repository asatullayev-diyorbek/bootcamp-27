class Cat:
    def __init__(self, ism, narx, rang, yosh):
        self.ism = ism
        self.narx = narx
        self.rang = rang
        self.yosh = yosh

    def __str__(self):
        return f"{self.ism} {self.narx} {self.rang} {self.yosh}."

cats = []

for i in range(2):
    ism = input("Mushuk ismi: ")
    narx = float(input("Narx: "))
    rang = input("Rang: ")
    yosh = int(input("Yosh: "))
    cats.append(Cat(ism, narx, rang, yosh))


