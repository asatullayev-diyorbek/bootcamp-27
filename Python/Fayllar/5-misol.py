yigindi = 0
file_name = "Python/Fayllar/numbers.txt"
with open(file_name,'r') as f:
    sonlar = list(map(int,f.readline().split()))
    print(sonlar)
    for s in sonlar:
        if s > 0:
            yigindi+=s
with open("result.txt", 'w') as f:
    f.write(str(yigindi))  
print(yigindi)       






