def ordena(M):
    for i in range(len(M)):
        for j in range(i+1,len(M)):
            if(M[i]>M[j]):
                M[i],M[j]=M[j],M[i]
    return M
M=[]
n= int(input())
linha2= input().split()
for x in range(n):
    M.append(int(linha2[x]))
print(ordena(M))
