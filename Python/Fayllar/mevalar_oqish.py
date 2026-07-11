count = 0

filename = "Python/Fayllar/mevalar.txt"
with open (filename, 'r') as f:
    for line in f.readlines():
        count += 1
        print (line)
print (count)

