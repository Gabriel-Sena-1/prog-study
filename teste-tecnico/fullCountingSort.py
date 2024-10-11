def fullCountingSort(number):
    matriz_resposta = [[] for i in range(number)]

    leitura = []
    for _ in range(number):
        leitura.append(list(input().split()))
    

    leitura.sort()
    matriz_nova = [linha[:] for linha in leitura]

    for i in range(number//4):
        matriz_nova[i][0] = '-'
    
    indice_matriz = len(matriz_nova)-1
    for j in range(number//4-1):
        matriz_nova[indice_matriz][0] = '-'
        indice_matriz -= 1

    print(matriz_nova)

fullCountingSort(20)