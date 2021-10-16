palavra= input()
lista=[]
for x in range(len(palavra)-1,-1,-1):
    lista.append(palavra[x])
inversa=""
for x in lista:
    inversa+=x
print(palavra+inversa) 