a = int(input("Uchburchakning a tomonini kiriting: "))
b = int(input("Uchburchakning b tomonini kiriting: "))
c = int(input("Uchburchakning c tomonini kiriting: "))
if a+b>c and a+c>b and c+b>a and a>0 and b>0 and c>0:
    print("Bunday tomonli uchburchak tuzish mumkin!")
else:
    print("Bunday tomonlardan uchburchak yasab bo'lmaydi")
