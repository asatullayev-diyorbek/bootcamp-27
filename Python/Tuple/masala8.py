sonlar = (1,3,5,6,8)

hoxlagan_son = int(input("Son: "))
index = 1
for son in sonlar:
    if hoxlagan_son == son:
        print("Topildi",index)
        break
    index+=1
else:
    print("Yoq")
