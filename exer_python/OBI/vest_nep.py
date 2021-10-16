a=0
n= int(input())
gabarito= input()
resposta= input()
for i in range(n):
    if(gabarito[i]==resposta[i]):
        a+=1
print(a)
