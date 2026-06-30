def fibonacci(f1, f2, n):
    if n == 0:
        return f1
    
    return fibonacci(f2, f1+f2, n-1)

def getNthFib(n):
    if n == 1:
        return 0
    if n == 2:
        return 1
    son = fibonacci(0, 1, n-1)
    return son

print(getNthFib(6))
    