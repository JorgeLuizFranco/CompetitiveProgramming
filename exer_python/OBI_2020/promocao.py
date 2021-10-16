n= int(input())
M=[]
cont=0
for i in range(n-1):
    a,b,e= map(int,input().split())
    M.append((a,b,e))
print(M)
for i in range(len(M)):
    for j in range(i+1,len(M)):
        if M[i][1] == M[j][1]:
            if M[i][2]!=M[j][2]:
                cont+=1
print(cont)