def media(lista) :
    soma=0
    for x in lista :
        soma+=x
    return soma/len(lista)
print(media([1,2,3,4,5,6,7]))
