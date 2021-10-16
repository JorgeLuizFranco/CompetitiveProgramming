def soma_casas():
    M= []
    n= int(input())
    for i in range(n):
            M.append(int(input()))
    x = int(input())
    for i in range(n,-1,-1):
            if(M[i-1]+M[i-2]==x):
                     print(M[i-2],' ',M[i-1])
                     break
soma_casas()
                 


                 
