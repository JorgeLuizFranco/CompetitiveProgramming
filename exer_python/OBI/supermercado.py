n= int(input())
menor=100000000000000000000000.0
for i in range(n):
    x,y= map(float,input().split())
    if(menor>10**3*(x/y)):
        menor=10**3*(x/y)
print("%.2f"%menor)

