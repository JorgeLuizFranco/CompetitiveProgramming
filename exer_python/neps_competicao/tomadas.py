linha= input()
T= linha.split()
Nf=4
for i in range(Nf):
    T[i]= int(T[i])
x=1
while(Nf>0):
    if x<1:
        x=T.pop()
    x-=1
    Nf-=1
while(T!=[]):
    x+=T.pop()
print(x)
