
# try:
#     son1 = int(input("son1 = "))
#     son2 = int(input("son2 = "))

#     sonlar = [1,23,5]
#     odam = {"ism": "Ali", "familiya": "Valiyev"}
#     print(son1 / son2)
#     # print(sonlar[son1])
#     # print(odam['asdf'])
# # except IndentationError:
# #     print("Bo'sh joy tashlashda xatolik")
# # except ValueError:
# #     print("Noto'g'ri qiymat kiritildi!")
# # except ZeroDivisionError:
# #     print("Sonni nolga bo'lib bo'lmaydi")
# except Exception as u:
#     print("Boshqa turdagi xatolik")
#     print(u)

# # IndentationError, ValueError, ZeroDivisionError, FileNotFound, IndexError, KeyError, SyntaxError


try:
    son = int(input("Son: "))
    print(10/son)
except (ZeroDivisionError, ValueError):
    print("Qiymatlar noto'g'ri")
except Exception as e:
    print(f"Xatolik: {e}")
else:
    print("Hammasi OK")
finally:
    print("Dastur tugadi")