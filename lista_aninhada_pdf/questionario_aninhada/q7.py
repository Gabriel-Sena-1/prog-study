number = int(input())

for i in range(number, 0, -1):
    for j in range(i-1, 0, -1):
        print(end=" ")
    print("*")