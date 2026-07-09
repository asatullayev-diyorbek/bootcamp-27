def calculator(a, b):
    assert type(a) in [int, float], "Faqat butun sonlar kerak"
    assert type(b) in [int, float], "Faqat butun sonlar kerak"
    assert b != 0, "2-son 0 bo'lmasligi kerak"
    # if b == 0:
    #     raise ZeroDivisionError("2-son 0 bo'lmasligi kerak")
    # if (not type(a) in [int, float]) or (not type(b) in [int, float]):
    #     raise ValueError("Faqat butun sonlar kerak")
    return a / b

print(calculator(10.5, "9"))
