def imprimeCampo(C):
    print(end= '  ')
    for coluna in range(len(C)):
        print(coluna+1,end=' ')
    print()
    i=0
    for linha in C:
        print(i+1,end=" ")        
        for célula in linha:
            print(célula,end=" ")
        i+=1
        print()    

def podeMover(T):
    global M,N
    R = []
    x1,y1 = T    
    if x1>0:
        R.append((x1-1,y1))
    if y1>0:
        R.append((x1,y1-1))
    if x1<M-1:
        R.append((x1+1,y1))
    if y1<N-1:
        R.append((x1,y1+1))
    return R


def livre(X):
    global percorridos
    global campo
    x,y = X
    #if x==0:
    #    print(X)
    if X == (0,10):
        print("WWWWW")
    if campo[x][y]=='.':
        return True
    #elif campo[X[0]][X[1]] =='A':
    #    return False
    else :
        return False
               

def bloqueia(L):
    val=[]
    for x,y in L:
        val.append(campo[x][y])
        campo[x][y]='#'
    return val

def restaura(L,valores):
    c=0
    for x,y in L:
        campo[x][y]=valores[c] 
        c+=1
    
    

def percurso(A,B,dist):
    #global percorridos
    #percorridos[A] = True
    xa,ya = A
    atual = campo[xa][ya]
    campo[xa][ya]= '@'
    Lx = podeMover(A)
    #print(A,' --> ',Lx,dist)
    dmax=0
    for X in Lx:
        if X==B:
            if dmax<dist:
                dmax = dist+1
        else:
            if livre(X):
                val = bloqueia(Lx)
                df = percurso(X,B,dist+1)
                #restaura(Lx,val)
                if df>dmax:
                    dmax = df
    #del(percorridos[A])
    #campo[xa][ya]=atual
    return dmax



def fuga():
    global M,N
    global percorridos
    global campo
    caso1=(7,7,3-1,7-1,5-1,1-1)
    caso2=(11,11,11-1,1-1,1-1,11-1)
    M,N,Xe,Ye,Xs,Ys = caso2
    percorridos={}
    #print("Digite N,M")
    #N,M= input().split(" ")
    #N= int(N)
    #M= int(M)
    campo= []
    for i in range(M):
        L=[]
        for j in range(N):
            if (i*j % 2) == 0:
                L.append('.')
            else:
                L.append('A')
        campo.append(L)
    #Xe,Ye= input().split(" ")
    #Xs,Ys= input().split(" ")
    campo[Xe][Ye]= '*'
    campo[Xs][Ys]= 0    
    imprimeCampo(campo)
    max = percurso((Xe,Ye),(Xs,Ys),1)
    print(max)


fuga()            
