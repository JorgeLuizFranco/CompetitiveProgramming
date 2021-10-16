string= input("String1: ")
split= string.split()
palavra= input("String2: ")

lista=[]
teste= True
for x in range(len(palavra)-1,-1,-1):
    lista.append(palavra[x])
inversa=""
for x in lista:
    inversa+=x
if inversa in split:
    for i in range(len(string)):
        if teste:
            verifica=""
            if(string[i]==inversa[0]):
                verifica+=inversa[0]
                index=i
                for j in range(len(inversa)-1):
                    if(string[i+j+1]==inversa[j+1]):
                        verifica+=string[i+j+1]
            if(verifica==inversa):
                print("A string2 invertida está na string1 na posição",index)
                teste=False
else:
    print("A string2 invertida não está na string 1") 
#str au sila
#isu
#usi