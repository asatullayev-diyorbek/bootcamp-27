
# s = b"Salom"
# s_array = bytearray("Salom", "ascii")
# s_bayts = bytes([83, 97, 108, 111, 109])

# print(s_bayts == s_array)


file = "Python/Binar fayllar/data.bin"

with open(file=file, mode='wb') as f:
    f.write(b"Salom\n")
    f.write(b"Alik\n")

with open(file=file, mode='rb') as f:
    data = f.readlines()
    print(data)

# file = "image.png"

# with open(file, 'rb') as f:
#     # data = f.read()
#     # print(data)
#     # print(len(data))
#     count = 0
#     with open("copy_image.png", 'wb') as copy_file:
#         while True:
#             chunk = f.read(1024)
#             count += 1
            
#             # if count < 100:
#             #     continue

#             if not chunk:
#                 break
#             copy_file.write(chunk)
   
#         print(count)



