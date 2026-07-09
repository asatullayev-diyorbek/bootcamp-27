# # # # datetime, time, random, string
# # import time
# # import datetime

# # print("Hammaga salom!")
# # time.sleep(5)
# # print("Men turdim!")

# # today = datetime.datetime.today()
# # print(today)






# # from datetime import datetime, date, timedelta

# # today = date.today()

# # print(today.day, today.month, today.year)
# # print(today)

# # d1 = timedelta(days=7, seconds=12)
# # d2 = timedelta(days=8)

# # print(d2-d1)

# # birth_day = date(year=2026, month=10, day=19)
# # today = date.today()

# # print(today - birth_day)


# import random

# minimal = 0
# maksimal = 100
# count = 0
# while True:
#     try:
#         taxmin = random.randint(minimal, maksimal)
#         count += 1
#         print(f"Siz o'ylagan son: {taxmin}")
#         natija = input("To'g'rimi? (>, <, =): ")
#         if natija == ">":
#             minimal = taxmin + 1
#         elif natija == "<":
#             maksimal = taxmin - 1
#         else:
#             print(f"{count} ta urinishda topdim🎉")
#             break
#     except:
#         print("Siz aldadingiz!")
#         break

