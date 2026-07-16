sozlar = []
for i in range(1,6):
    soz = input(f"{i}- sozni kiriting: ")
    sozlar.append(soz)
topdim = True
while topdim:
    topdim = False
    for index in range(0,len(sozlar)-1):
        if len(sozlar[index])>len(sozlar[index+1]):
            sozlar[index+1] , sozlar[index] = sozlar[index] , sozlar[index+1]
            topdim = True

print(sozlar)
             