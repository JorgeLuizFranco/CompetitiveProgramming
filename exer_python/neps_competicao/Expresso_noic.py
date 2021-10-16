t=0
M=[]
n = 2*int(input())
for i in range(n):
    a,b= map(int,input().split())
    M.append((a,b))
for i in range(n//2):
    for j in range(n//2,n):
        if(M[i][0]<=M[j][0] and M[i][1]>=M[j][1]):
            t+= abs(M[i][0]-M[j][0])+abs(M[i][1]-M[j][1])
            break
print(t)



