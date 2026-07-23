class Talaba:
    def __init__(self, ism, familiya="", yosh=0, baho=0):
        self.ism = ism
        self.familiya = familiya
        self.yosh = yosh
        self.baho = baho

    def bahosi(self):
        print(self.ism, self.baho)

    def change_baho(self, yangi_baho):
        assert yangi_baho <= 10, ValueError("Baho 10dan katta bo'lishi mumkin emas")
        self.baho = yangi_baho
        return self

    def salomlashish(self):
        print(f"Salom, men {self.ism}!")

talaba1 = Talaba("Eshmat", "Toshmatov", 91)
talaba2 = Talaba("Toshmat", baho=4)

talaba1.salomlashish()
talaba2.salomlashish()

talaba2.change_baho(5)

talaba1.bahosi()
talaba2.bahosi()






# ism = "Ali"

# # talaba1 = Talaba()
# # talaba1.ism = "Eshmat"
# # talaba1.baho = 0

# # print(type(talaba1))
# # print(talaba1.ism)
# # print(talaba1.baho)

# talaba1 = Talaba("Eshmat", "Toshmatov", 91)
# talaba2 = Talaba("Toshmat")

# print(talaba1.ism)
# print(talaba1)

# print(talaba2.yosh)
