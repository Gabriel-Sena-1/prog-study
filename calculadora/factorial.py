def fact(n):
    if n == 1: return True
    return n * fact(n - 1)

print(fact(5)) 