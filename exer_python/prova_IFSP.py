qtd= int(input("Digite a quantidade de alunos: "))
i=0
nome_aluno=' '
n1= 0
n2=0
faltas=0
rep_falta=0
reprovado=0
recuperacao=0
aprovados=0
maior=0
media=0
melhor=0
while i<qtd:
    i+=1
    nome_aluno= input("Digite o nome do aluno: ")
    n1= int(input("Digite a primeira nota : "))
    n2= int(input("Digite a segunda nota: "))
    faltas= int(input("Digite a quantidade de faltas: "))
    media= (n1+n2)/2
    if maior<media:
        maior=media
        melhor= nome_aluno
    if faltas>20:
        print("REPROVADO POR FALTAS ")
        rep_falta+=1
    elif faltas <= 20:
        if media>=6:
            print("APROVADO")
            aprovados+=1
        elif media>=4:
            print("RECUPERACAO")
            recuperacao+=1
        elif media<4:
            print("REPROVADO")
            reprovado+=1
print("Reprovados: ",reprovado)
print("Aprovados: ",aprovados)
print("Reprovados por faltas: ",rep_falta)
print("Alunos recupreação: ",recuperacao)
print("Nome melhor aluno: ",melhor," Nota melhor aluno: ",maior)






