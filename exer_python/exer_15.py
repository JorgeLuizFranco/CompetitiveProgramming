def funcao(n) :
    lista= [0]*n
    for i in range(n) :
        lista[i]=(input("Digite o  valor :"))
    return lista
n= int(input("Digite o valor : "))
print(funcao(n))
