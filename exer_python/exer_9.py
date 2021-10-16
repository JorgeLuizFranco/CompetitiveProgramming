nome = input("Digite seu nome")
print(nome.upper())
print(nome.lower())
nome= nome.split()
tam=0
for x in  nome :
    tam += len(x)
print(tam)
print(len(nome[0]))


