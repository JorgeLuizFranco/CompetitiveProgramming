cont=0
#N= int(input())
N=12
V= [3,2,5,2,10,4,4,7,12,2,8,10]
C=[0]*(N+1)

for i in range(N):
    C[V[i]]+=1
D={}
for i in range(N):
    if C[i] > 0:
        if C[i] in D.keys():
            D[C[i]].append(i)
        else:
            D[C[i]] = [i]
Lr = list(D.keys())
Lr.sort()
fim=False
pos= len(Lr)-1
while !fim:
   m = Lr[pos]
   Ln = D[m]
   
    
print(V)
print(C)
print(D)


           
