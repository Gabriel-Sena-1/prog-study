k = int(input())
seq = []
somatorio = 0

for i in range(1, k+1):
    termo = (3*i)-2
    seq.append(termo)
    somatorio += termo    

print("Sequência:")
for j in range(len(seq)):
    print(seq[j], end=" ")

print()
print()
print("Para k = {0}, o valor do somatório é: {1}".format(k, somatorio))