matn = input("Matnni kiriting: ")    #1072, 1103
soni = 0

for belgi in matn:
    soni += ord(belgi) >= 1072 and ord(belgi) <= 1103 # 1072 <= ord(belgi) <= 1103

print(soni)