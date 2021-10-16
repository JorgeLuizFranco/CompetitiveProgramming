n = int(input())
P=[]
teste= True
for i in range(n):
    linha= input()
    #print("--> ",linha)
    if '{' in linha or '}' in linha:
        for i in range(len(linha)):
            if linha[i]=='{':
                P.append('{')
            elif linha[i]=='}':
                if P==[]:
                    teste= False                 
                    break   
                else:
                    P.pop()               
            
if (teste) and P==[]:
    print('S')
else:
    print('N')
