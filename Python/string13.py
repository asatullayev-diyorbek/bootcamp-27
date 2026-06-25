matn = input("matnni kiriting: ")
soni = 0

for belgi in matn:
    soni += belgi.isdigit()

print(f"Raqamlar soni: {soni}")