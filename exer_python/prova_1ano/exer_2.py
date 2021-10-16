n= int(input("Quantos elementos serão digitados? "))
i=0
cont=0
lista=[]
menor= int(input("Digite valor: "))
lista.append(menor)
#while(i<n-1):
for i in range(n-1):
    x= int(input("Digite valor: "))
    if x<menor:
        print("Valor desconsiderado!")
        cont+=1
    else:
        lista.append(x)
        menor=x
while(cont>0):
    x= int(input("Digite valor: "))
    if x<menor:
        print("Valor desconsiderado!")
        cont+=1
    else:
        lista.append(x)
        menor=x
    cont-=1
pares=[]
for a in lista:
    if(a%2==0):
        pares.append(a)
print()
print("Lista criada: ",lista)
print()
print("Pares: ")
for par in pares:
    print(par)
