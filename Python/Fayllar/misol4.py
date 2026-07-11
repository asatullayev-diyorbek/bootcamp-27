file_name="Python/Fayllar/mevalar.txt"

with open(file_name,'a') as f:
    for i in range(2):
        meva = input(f"{i+1}-elment qosh: ")
        f.write(meva+'\n')
print("Qo'shildi!")

with open(file_name,'r') as r:
    qatorlar=r.readlines()
    qator_toza=list(map(lambda s:s[0:-1],qatorlar))
print(qator_toza)