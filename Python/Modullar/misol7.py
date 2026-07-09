try:
    a,b=map(int,input("sonlarini kiriitg: ").split())
    print(a/b)
except ValueError as v:
    print(f"qiymat xato {v}")
except ZeroDivisionError as z:
    print(f"nolga bo'lib bo'lmaydi {z}")