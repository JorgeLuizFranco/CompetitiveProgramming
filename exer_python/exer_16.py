def separa(L,x) :
    Lmaior = []
    Lmenor= []
    for i in L :
        if i>x :
            Lmaior.append(i)
        else :
            Lmenor.append(i)
    return (Lmenor,Lmaior)
L=[]
elemento=0
print("Se deseja interromper o laço digite 'pare' ")
while elemento!= "pare" :
    elemento = input("Digite um elemento : ")
    if elemento!= "pare" :
        L.append(int(elemento))
        
x=int(input("Digite o número a ser comparado : "))
        

print(separa(L,x))
      
