a,b = 0,0
M=[]
n= int(input())
l2= input().split()
for i in range(n):
    M.append(int(l2[i]))
    if(M[i]==1 and a==0):
        a=1
    elif(M[i]==1 and a==1):
        a=0
    elif(M[i]==2 and a==b and b==0):
         a,b=1,1
    elif(M[i]==2 and a==b and b==1):
        a,b=0,0
    elif(M[i]==2 and a!=b and b==0):
        a,b=0,1
    else:
        a,b=1,0
print(a)
print(b)

    
