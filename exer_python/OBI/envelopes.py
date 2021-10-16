def envelope(V):
    cont=0
    while not 0 in V:
        for i in range(len(V)):
            V[i]-=1
        cont+=1
        if 0 in V:
            return cont
    return 0 


n= int(input())
V= list(map(int,input().split()))
print(envelope(V))