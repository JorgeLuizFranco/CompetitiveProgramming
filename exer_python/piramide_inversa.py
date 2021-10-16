max= int(input("Digite o numero máximo : "))
while max%2==0 :
    max= int(input("O numero precisa ser impar : "))
n= max//2 +1
print("")
for i in range(n):
    for j in range(i+1,max+1-i):
        print(j,end=" ")
    print("\n")
    for x in range(i+1):
        print("  ",end= "")
        
