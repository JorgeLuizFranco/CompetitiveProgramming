
n,c,m = input().split(" ")
n= int(n)
c= int(c)
m= int(m)
linha1 = input()
carimbadas = linha1.split(' ')
for x in range(c):
    carimbadas[x] = int(carimbadas[x])
linha2= input()
compradas= linha2.split(' ')
for x in range(m):
    compradas[x]= int(compradas[x])
for y in range(c):
    for x in range(m):
        if(carimbadas[y]==compradas[x]):
            c-=1
            break
    
print(c)
