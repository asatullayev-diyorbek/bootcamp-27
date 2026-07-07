# students = ["Eshmat", "Toshmat", "Ali", "Vali", "G'ani"]
# ages = [24, 18, 19, 30, 40]
# address = ["Marg'ilon", "Andijon", "Qo'qon", "Namangan", "Oltiariq"]

# student = { # key - int, float, boolean, string
#     "name": "Eshmat",
#     "age": 24,
#     "address": "Marg'ilon"
# }
# print(type(student))
# print(student)

# print(student['name'])

# for key in student:
#     print(key, student[key])


# print("*"*10)

# print(student.keys())
# print(student.values())
# print(student.items())

# student['age'] =  28
# student['last_name'] = "Toshmatov"

# print(student)

# a = input("Kiriting: ")
# # if a in student.keys():
# #     print("Mavjud")
# #     del student[a]
# # else:
# #     print("Mavjud emas")

# # print(student)

# c = student.get(a, "Bunday kalit yo'q")
# # c = student[a]
# print(c)

val = [
    {
    "id": 68,
    "Code": "840",
    "Ccy": "USD",
    "CcyNm_RU": "Доллар США",
    "CcyNm_UZ": "AQSH dollari",
    "CcyNm_UZC": "АҚШ доллари",
    "CcyNm_EN": "US Dollar",
    "Nominal": "1",
    "Rate": "11909.66",
    "Diff": "-24.58",
    "Date": "03.07.2026"
  },
  {
    "id": 20,
    "Code": "978",
    "Ccy": "EUR",
    "CcyNm_RU": "Евро",
    "CcyNm_UZ": "EVRO",
    "CcyNm_UZC": "EВРО",
    "CcyNm_EN": "Euro",
    "Nominal": "1",
    "Rate": "13588.92",
    "Diff": "-2.99",
    "Date": "03.07.2026"
  },
  {
    "id": 56,
    "Code": "643",
    "Ccy": "RUB",
    "CcyNm_RU": "Российский рубль",
    "CcyNm_UZ": "Rossiya rubli",
    "CcyNm_UZC": "Россия рубли",
    "CcyNm_EN": "Russian Ruble",
    "Nominal": "1",
    "Rate": "152.28",
    "Diff": "-0.7",
    "Date": "03.07.2026"
  }
]

import pprint

pprint.pprint(val)

# print(val)