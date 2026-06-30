matn = input("matnni kiriting:")
yangi_matn=""
for belgi in matn:
    if 65<=ord(belgi)<=90:
        yangi_matn+=belgi.lower()
    elif 97<=ord(belgi)<=122:
        yangi_matn+=belgi.upper()
    else:
        yangi_matn+=belgi
print(yangi_matn)
