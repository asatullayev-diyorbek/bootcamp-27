file = "secret_image.png"
kalit = 1234
with open(file, 'rb') as f:
    data = f.read()

d = data[-15:]
print(d.decode("utf-8"))