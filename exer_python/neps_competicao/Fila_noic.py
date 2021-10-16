n= int(input())
V= list(map(int,input().split()))
maxi=0
fim= False
i=0
while not fim:
    cont=1
    while (i<n-1) and (V[i]< V[i+1]):
        cont+=1
        i+=1
    if cont>maxi :
        maxi=cont
    if i== n-1:
        fim= True
    i+=1

print(maxi)