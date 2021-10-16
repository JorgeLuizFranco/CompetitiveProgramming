D= {}
lista=[("x",1),("x",3),("Y",1),("y",2),("X",2),("z",1),("X",1)]
for tupla in lista :
    chave,valor= tupla
    chaveM= chave.capitalize()
    if  chaveM in D :
        lista = D[chaveM]
        if not(valor in lista):
            lista.append(valor)
            D[chaveM]= lista
    else :
        D[chaveM]= [valor]
    
print(D)

