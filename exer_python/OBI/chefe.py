def indiret(D):
    for _z in range(2):
        for i in range(len(D)):
            if(D[i+1]!=[]):
                for j in range(len(D[i+1])):
                    if D[D[i+1][j][0]] != []:
                        for k in range(len(D[D[i+1][j][0]])):
                            if not( D[D[i+1][j][0]][k] in D[i+1]):
                                    D[i+1].append(D[D[i+1][j][0]][k])
    return D

def troca(a,b,X):
    X[a],X[b]=X[b],X[a]
    for i in range(len(X)):
        for j in range(len(X[i+1])):
            k,l = X[i+1][j]
            if k==a:                
                X[i+1][j]=b,l
            elif k==b:
                X[i+1][j]=a,l  


def pergunta(a,X,T):
    M=[]
    for i in range(len(X)):
        for j in range(len(X[i+1])):
            if X[i+1][j][0]==a:
                M.append(T[i][1])
                break
    if M!=[]:
        M.sort()
    else:
        M.append('*')
    return M[0]
    

D={}
n,m,y= map(int,input().split())
linha= list(map(int,input().split()))
Tuplas= []
for i in range(n):
    Tuplas.append((i+1,linha[i]))
    D[i+1]=[]
for i in range(m):
    a,b=map(int,input().split())
    D[a].append(Tuplas[b-1])
X=indiret(D)
R=[]
for i in range(y):
    linha= input().split()
    troca(int(linha[1]),int(linha[2]),X) if linha[0]=='T' else R.append(pergunta(int(linha[1]),X,Tuplas))
for i in range(len(R)):
    print(R[i])
