linha = input()
linha+='o'
m=[]
palavra=""
x=linha[0]
for i in linha:
    print(i)
    if(x!=i):
        m.append(palavra)
        palavra=""
        x=i
    palavra+=i

for c in m:
    print(c)