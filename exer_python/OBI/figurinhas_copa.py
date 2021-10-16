n,c,m= map(int,input().split())
C= list(map(int,input().split()))
A=list(map(int,input().split()))
for i in range(c):
    if C[i] in A:
        c-=1
print(c)

