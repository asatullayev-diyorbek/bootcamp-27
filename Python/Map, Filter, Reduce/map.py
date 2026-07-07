# # a, b, c = map(int, input("a, b, c = ").split())

# # print(a)

# # input() -> "3 5 7"
# # .split() -> ["3", "5", "7"]

# # map(int("3"))
# # map_object(3, 5, 7)

# # ## map(funksiya, ketma_ketlik)
# # katta_harflar = map(lambda x: x.upper(), "salom")

# # print(list(katta_harflar))

# sonlar = [3, 6, 8, 9, 12, 13, 18]
# darajalar = list(map(lambda x: x**2, sonlar))

# print(darajalar)

### filter(funksiya, ketma_ketlik)

# sonlar = [3, 6, 8, 9, 12, 13, 18]
# juftlar = list(filter(lambda x: x.isupper(), "UzbeKisTan"))

# print(juftlar)

suzlar = ["olma", "banan", "olma", "uzum", "banan"]
suzlar_set = set(suzlar)
takroriy = list(filter(lambda x: suzlar.count(x) > 1, suzlar_set))

print(takroriy)