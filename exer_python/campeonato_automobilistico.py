

n_pilotos=10
n_provas=6
D= {}
print("Digite o nome dos candidatos : ")


for x in range (n_pilotos):
    D[x+1]= []
    D[x+1].append(input(x+1))
    D[x+1].append(0)
print("Digite a pontuação nas provas : ")


for i in range(n_provas):
    print((i+1),"ª prova : ")
    for j in range(4):
        if j==0:
          D[int(input(j+1))][1]+=10
        elif j==1:
          D[int(input(j+1))][1]+=7
        elif j==2:
          D[int(input(j+1))][1]+=5
        else :
          D[int(input(j+1))][1]+=3

        
for y in range(n_pilotos-1):
    for z in range(y+1,n_pilotos) :
        if D[y+1][1]<D[z+1][1]:
            D[y+1],D[z+1]=D[z+1],D[y+1]

            
for r in range(n_pilotos):
    print(r+1,"º ",D[r+1][0]," ",D[r+1][1])
    
