linha= input().split()
L1=[]
for x in linha:
    L1.append(int(x))
cont=0
for x in L1:
    if x==2:
       cont+=1
print(cont)


