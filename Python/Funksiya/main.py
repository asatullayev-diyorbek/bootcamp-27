def funksiya_nomi():
    print("salom")

def daraja(son, daraja):
    return son ** daraja

def yigindi(*args):
    jami = 0
    for son in args:
        jami += son
    return jami

def full_name(ism: str, familiya, age=0):
    print(f"Ism: {ism}\nFamiliya: {familiya}\nYosh: {age}")
    
    

# print(funksiya_nomi())
# print(daraja(5, 3))
# print(yigindi(4, 6, 7, 9, 2, 4))

full_name("Eshmatov", "Toshmat", 18)  # position
full_name(ism="Eshmat", familiya="Toshmat", age=18) # key=value
full_name("Ali", familiya="Alijonov", age=20) # aralash

ism = "Vali"

