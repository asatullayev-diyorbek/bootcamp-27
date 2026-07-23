class Book:
    def __init__(self, nom, muallif=None, sahifalar_soni=0):
        self.nom = nom
        self.muallif = muallif
        self.sahifalar_soni = sahifalar_soni

    def oqildi(self):
        return f"{self.nom} kitobi o'qib bo'lindi"

    def hajm(self):
        if self.sahifalar_soni > 250:
            return "Katta kitob"
        else:
            return "Kichik kitob"

    def malumot(self):
        return f"Nomi: {self.nom}, Muallifi: {self.muallif}, Sahifalar soni: {self.sahifalar_soni}"


book1 = Book("Ikki eshik orasi", "O'tkir Hoshimov", 300)
book2 = Book("O'tkan kunlar", "Abdulla Qodiriy", 200)
book3 = Book("Ufq", "Said Ahmad", 150)

# if book1.muallif:
#     print(book1.muallif)
print(book1.oqildi())
print(book2.oqildi())
print(book3.oqildi())

books = [book1, book2, book3]

for b in books:
    print(b.malumot())
