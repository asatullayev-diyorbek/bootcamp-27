marvel = {
    "Ali", "Vali", "Hasan",
    "Aziz", "Kamol"
}

dc = {
    "Hasan", "Aziz",
    "Jasur", "Asad", "Kamol"
}

c = marvel.intersection(dc)
d = marvel.difference(dc)
f = dc.difference(marvel)
e = marvel.union(dc)
k = dc.symmetric_difference(marvel)
print(c)
print(d)
print(f)
print(e)
print(k)