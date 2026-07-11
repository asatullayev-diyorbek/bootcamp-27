filename = "Python/Fayllar/mevalar.txt"
with open(filename,'a') as f:
    for i in range(0,5):
        meva = input("Meva kiriting")
        f.write(meva + "\n")
print("Saqlandi")