main_test = {
    "Ali", "Vali", "Hasan",
    "Aziz", "Diyor", "Jasur"
}
bonus_test = {
    "Hasan", "Aziz",
    "Kamol", "Jasur", "Asad"
}
c = main_test.intersection(bonus_test)
b = main_test.difference(bonus_test)
print(c)
print(b)

b = bonus_test.difference(main_test)
print(b)
only_one=bonus_test.union(main_test)
print(only_one)
bitta_test=main_test.symmetric_difference(bonus_test)
print(bitta_test)
