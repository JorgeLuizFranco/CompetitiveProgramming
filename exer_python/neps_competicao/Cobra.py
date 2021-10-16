def teste(linha):
    for i in range(2):
        if(linha[i]==linha[i+2]):
            return 'V'
    return 'F'
linha= input().split() 
print(teste(linha))
