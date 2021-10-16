a,b,c = map(int,input().split())
x,y,z= map(int,input().split())
ca=cb=cc=0
if a<=x and b<=y and c<=z:
    while x>=a:
        ca+=1
        x-=a
    while y>=b:
        cb+=1
        y-=b
    while z>=c:
        cc+=1
        z-=c
    print(ca*cb*cc)
else:
    print(0)
    


