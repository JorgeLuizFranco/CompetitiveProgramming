def verifica(vet):
    for j in range(1,len(vet)):
        if j==len(vet)-1 and vet[j-1]==0 and vet[j]==1:
            return j+1
        elif j!=len(vet)-1 and vet[j-1]==0 and vet[j]==1 and vet[j+1]==0:
            return j+1
    return False
        
L,C= map(int,input().split())
a,b= map(int,input().split())
M=[]
for i in range(L):    
    M.append(list(map(int,input().split())))
ok = False   
for i in range(L):
  #  if(i==0):
  #      c= verifica(M[i])       
  #      if c!= False:
  #          print(i+1,c)
  #          break
  #  else:
        for j in range(C):
            if M[i][j]==1:
                if j==0:
                    if i==L-1:
                        if  M[i-1][j]+M[i][j+1]<2:
                            if (a,b) != (i+1,j+1):
                                print(i+1,j+1)
                                ok = True
                         
                    elif i==0:
                        if  M[i+1][j]+M[i][j+1]<2:
                            if (a,b) != (i+1,j+1):
                                print(i+1,j+1)
                                ok = True
                    else:
                        if M[i-1][j]+M[i][j+1]+M[i+1][j]<2:
                            if (a,b) != (i+1,j+1):
                                print(i+1,j+1)
                                ok = True
                elif j==C-1:
                    if i==L-1:
                        if  M[i-1][j]+M[i][j-1]<2:
                            if (a,b) != (i+1,j+1):
                                print(i+1,j+1)
                                ok = True
                    elif i==0:
                        if  M[i+1][j]+M[i][j-1]<2:
                            if (a,b) != (i+1,j+1):
                                print(i+1,j+1)
                                ok = True
                    else:
                        if  M[i-1][j]+M[i][j-1]+M[i+1][j]<2:
                            if (a,b) != (i+1,j+1):
                                print(i+1,j+1)
                                ok = True
                else:
                    if i==L-1:
                        if  M[i-1][j]+M[i][j-1]+M[i][j+1]<2:
                            if (a,b) != (i+1,j+1):
                                print(i+1,j+1)
                                ok = True
                    elif i==0:
                        if  M[i+1][j]+M[i][j-1]+M[i][j+1]<2:
                            if (a,b) != (i+1,j+1):
                                print(i+1,j+1)
                                ok = True
                    else:
                        if  M[i-1][j]+M[i][j-1]+M[i+1][j]+M[i][j+1]<2:
                            if (a,b) != (i+1,j+1):
                                print(i+1,j+1)
                                ok = True
if not ok:
    print(a,b)
    
