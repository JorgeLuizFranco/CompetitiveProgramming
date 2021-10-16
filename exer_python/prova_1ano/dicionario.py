c,n=map(int,input().split())
versoes=[]
D={}
for i in range(c):
    pc,vc=map(int,input().split())
    D[pc]=vc
for i in range(n):
    pn,vn=map(int,input().split())
    if(not pn in D.keys()):
        D[pn]=vn
        versoes.append([pn,vn])
        continue
    vc=D[pn]
    v=0
    for programa in versoes:
        nome,versao=programa  
        if(nome==pn):
            v=versao
    if  vn>vc and vn>v:
        if(not pn in versoes):
            versoes.append([pn,vn])
        else:
            for i in range(len(versoes)):
                nome,versao=versoes[i]
                if(nome==pn):
                    versoes[i]=[nome,vn]

for programa in versoes:
    nome,versao=programa
    print(nome,versao)





