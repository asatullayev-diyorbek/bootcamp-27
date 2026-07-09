def password(a):
    if len(a)<6:
        raise ValueError ("Parol kamida 6 belgi bo'lishi kerak")
    else:
        return ("Parol qabul qilindi")
    
print(password("python"))