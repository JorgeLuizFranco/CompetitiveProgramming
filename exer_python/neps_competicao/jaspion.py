T=int(input())
for cont in range(T):
    M,N=input().split(' ')
    D={}
    for i in range(int(M)):
        jap = input()
        port = input()
        D[jap]=port
    for i in range(int(N)):
        linha = input().split(' ')
        saida = ''
        for palavra in linha:
            if palavra in D.keys():
                saida+=D[palavra]+' '
            else:
                saida+=palavra+' '
        print(saida)
        
