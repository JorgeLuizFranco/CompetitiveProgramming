N= int(input())
X= int(input())
Y= int(input())
Z= int(input())
cont=0
l=[X,Y,Z]
l.sort()
l.reverse()
while(N>0 and l!=[]):
    r= l.pop()
    N-=r
    if(N>=0):
        cont+=1
            
print(cont)
