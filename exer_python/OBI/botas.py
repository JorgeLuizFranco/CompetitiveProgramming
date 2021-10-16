Botas={}
cont=0
n= int(input())
for i in range(n):
    m,L= input().split()
    if  not(m in Botas):
        Botas[m]=L,1
    else:
        lado,qtd = Botas[m]
        if lado==L:
            qtd+=1
            Botas[m]=lado,qtd
        else:
            qtd-=1
            cont+=1
            if qtd>0:
                    Botas[m]=lado,qtd
            else:    
                    del(Botas[m])
print(cont)
