# x = float(input())
# y = float(input())
# e = float(input())

# #Foram realizadas it iterações para se determinar o valor aproximado para a raiz quadrada de x.2f que é valor_raiz.5f

# y_ant = 0
# y_at = 0
# it = 0

# while True:
#     it += 1
    
#     div_xy = x/y
#     raiz_aprox = (y + (x/y))/2
    
#     if (y_ant - y_at) == 0:
#         y_at = y
#         y_ant = raiz_aprox
#         continue
#     else:
#         dif = y_ant - y_at
        
#         if dif <= e:
#             print("Foram realizadas {0:.2f} iterações para se determinar o valor aproximado para a raiz quadrada de {1:.2f} que é {2}".format(it, x, raiz_aprox))
#             break
#         else:
#             continue

def valor_absoluto(y1, y2):
  if y1 > y2: return y1-y2
  else: return y2-y1

def raiz_quadrada(x, y, e):
  iteracoes = 0
  while True: #while infinito
    iteracoes += 1
    y_anterior = y #atualizando o y preservando o valor anterior
    y_atual = ((y + (x / y)) / 2) #atualizando o valor de y
    
    if valor_absoluto(y_anterior, y_atual) <= e:
        return y_atual, iteracoes
    else:
        y = y_atual # se a diferenca nao for menor que a margem de erro refazer o loop e atualizar o valor de y
      



# Exemplo de uso
x = float(input())
y = float(input())
e = float(input())

raiz_aproximada, iteracoes = raiz_quadrada(x, y, e)

print("Foram realizadas {0} iterações para se determinar o valor aproximado para a raiz quadrada de {1:.2f} que é {2:.6f}".format(iteracoes, x, raiz_aproximada))
