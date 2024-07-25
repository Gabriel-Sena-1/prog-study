def fullCounting():
    result = [[] for i in range(100)]

    for i in range(n//2):
        result[int(arr[i][0])].append('-')
    
    for i in range(n//2):
        result[int(arr[i][0])].append(arr[i][0])

    for string in result:
        if string:
            print(*string, end=' ')
    
