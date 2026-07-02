# sonlar = [] # bo'sh ro'yxat
# yoshlar = [14,16,17,20, 15, "yigirma", True, False, 17.3]

# # print(sonlar)
# # print(yoshlar)
# jami=0
# for yosh in yoshlar: 
#     if type(yosh) == int:
#         jami += yosh

# print(jami)

yoshlar = [14,16,17,20, 15, 17.3]
print(yoshlar)

yoshlar.append(24)
print(yoshlar)

yoshlar2 = [5,4,2,6,7]
print(len(yoshlar))

yoshlar.extend(yoshlar2)
print(yoshlar)

print(len(yoshlar))

ages = yoshlar
print(ages)
ages.append(8)
print(ages)
print(yoshlar)

yosh = 10
age = yosh
age = 15
print(yosh, age)

yoshlar.insert(5, 80)
print(yoshlar)

try:
    print(yoshlar.index(80))
except:
    print("Son topilmadi")

# try:
#     son = int(input("Son: "))
#     print(son)
# except:
#     print("To'g'ri son kiriting ")

print(yoshlar.count(5))
son = yoshlar.pop(4)

print(yoshlar)
print(son)

print(yoshlar.remove(80))
print(yoshlar)

del yoshlar[3]
print(yoshlar)

del yoshlar

print(ages)

ages.reverse()
print(ages)

ages.sort(reverse=True)
print(ages)

print(ages[::-2]) # slicing
print(ages[-1]) # 0,1,2,3
# -1,-2,-3,....