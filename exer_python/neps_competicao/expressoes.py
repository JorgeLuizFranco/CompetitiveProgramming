def analise():
    linha= input()
    pilha=[]
    for i in range(len(linha)):
        if(linha[i]=='{' or linha[i]=='[' or linha[i]=='('):
            pilha.append(linha[i])
        elif( linha[i]=='}' or linha[i]==']' or linha[i]==')'):
            if(pilha==[]):
                return 'N'
            x=pilha.pop()
            if(linha[i]==')' and x!='('):
                return 'N'
            elif(linha[i]==']' and x!='['):
                return 'N'
            elif(linha[i]==']' and x!='['):
                return 'N'
        else:
            return 'N'
    return 'S'

T=int(input())
for i in range(T):
    print(analise())
    
                
        
            
            
    
