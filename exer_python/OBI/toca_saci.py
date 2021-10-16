L,C= map(int,input().split())
M=[]
atual=(0,0)
cont=1
for i in range(L):
    M.append(list(map(int,input().split())))
    if atual == (0,0):
        for j in range(C):
            if(M[i][j]==3):
                atual= (i,j)
                break
anterior= (-1,-1)
while M[atual[0]][atual[1]]!=2:
    for i in [(0,1),(0,-1),(1,0),(-1,0)]:
        nova=(atual[0]+i[0],atual[1]+i[1])
        if nova[0]>=0 and nova[1]>=0 and nova[0]<L and nova[1]<C:
            if M[nova[0]][nova[1]]==2:
                atual= nova
                cont+=1
                break
            elif M[nova[0]][nova[1]]==1 and anterior!=nova:
                anterior= atual
                atual=nova
                cont+=1
print(cont)


