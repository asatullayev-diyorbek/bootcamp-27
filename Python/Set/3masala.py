entered = {
    "Ali", "Vali", "Hasan",
    "Aziz", "Diyor", "Jasur"
}
left = {
    "Hasan", "Aziz",
    "Diyor", "Kamol", "Asad"
}
# d = entered.intersection(left)
# print(d)



# print("------------")
# f = entered.difference(left)
# print(f)
h=left.difference(entered)
print(h)
d=left.union(entered)
print(d)
s=entered.symmetric_difference(left)
print(s)
