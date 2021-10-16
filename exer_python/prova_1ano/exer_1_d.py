linha= input().split()
L1=[]
for x in linha:
    L1.append(int(x))
elem= int(input("Digite seu elemento: "))
teste= False
i=0
while(not teste):
    if(L1[i]==elem):
        del L1[i]
        teste= True
    i+=1

#for i in range(len(L1)):
#    if L1[i]==elem:
#       del L1[i]
#        teste= True
#        break
print(L1)
