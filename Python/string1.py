belgi = input("Belgini kiriting: ")

print("Harf:", belgi.isalpha())
print("Raqam:", belgi.isdigit())
print("Belgi:", belgi.isascii() and not belgi.isalnum())
print(belgi.isupper())