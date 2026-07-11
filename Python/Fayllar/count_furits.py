count = 0
keyy=input("enter key! ")
filename = "Python/Fayllar/mevalar.txt"
with open (filename, 'r') as f:
    for line in f.readlines():
        if keyy in line:
            count += 1
print (count)