file = "image.png"
xabar = "Bu maxfiy xabar"
kalit = 1234

with open(file, 'rb') as f:
    with open("secret_image.png", 'wb') as new_f:
        new_f.write(f.read())
        new_f.write(xabar.encode("utf-8"))
print("saqlandi")