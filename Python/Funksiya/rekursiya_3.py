def binary_calculator(son):
    if son == 1:
        return "1"

    return binary_calculator(son//2) + str(son%2)

print(binary_calculator(10))