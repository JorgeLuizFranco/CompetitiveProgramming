def obter_velocidade(n):
    msg= "Digite a velocidade do veiculo "+str(n)+": "
    v=float(input(msg))
    return v

def imprime_linha(d1,d2,t):
    #print(d1," ",d2," ",t,)
    print("%8.1f  %8.1f    %5.1f" %(d1,d2,t))   

def calcula_distancia():
    d1,d2=0,0
    v1= obter_velocidade(1)
    v2 = obter_velocidade(2)
    t1= float(input("Digite o tempo : "))
    t=0
    #imprime_linha("D1","D2","t")
    print("   Dist 1    Dist 2    Tempo")
    while t<t1 :
        t+=1
        d1+= v1        
        imprime_linha(d1,d2,t)
    while d1> d2:
        t+=1
        d2+= v2
        d1+= v1
        imprime_linha(d1,d2,t)
        
    
calcula_distancia()
