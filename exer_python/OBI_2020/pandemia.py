n,m= map(int,input().split())
d,r= map(int,input().split())
M=[]
I=[d]
for i in range(m):
    M.append(list(map(int,input().split())))
for t in range(r-1,m):    
    for j in range(1,M[t][0]+1):
        if M[t][j] in I:
            for k in range(1,len(M[t])):
                if not (M[t][k] in I):
                  I.append(M[t][k])
print(len(I))           
