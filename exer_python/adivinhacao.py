from random import randrange
res=-1
num= randrange(0,500)
print(num)
tentativas =0
while res!= num :
    res = int(input("Escolha um número de 0 a 500 : "))
    while res<0 or res>500 :
        res = int(input("Escolha um número de 0 a 500, por favor : "))
    if(res!=num):
        if res<num :
            print("\nVocê precisa escolher um número MAIOR\n")
        else :
            print("\nVocê precisa escolher um número MENOR\n")
    tentativas+=1
print("\n\nVoce acertou em : ",tentativas,"tentativa(s)")    
