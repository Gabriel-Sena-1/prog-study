n = int(input())
cont = 2
n_fatorial = 1

while cont <= n:
    n_fatorial = n_fatorial * cont
    print(cont)
    cont += 1


print("{0}! = {1}".format(n, n_fatorial))