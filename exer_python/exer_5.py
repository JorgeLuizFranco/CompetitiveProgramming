Classe = [("Briggs",2.5),("Carly",9.3),("Franklin",7),("Freddie",8),("Gibby",3.8),("Howard",5.7),("Spencer",7.3),("Sam",6)]
print("Alunos Aprovados : ")
print("Aluno \t\t  Nota")
for nome,nota in Classe :
    if nota > 6 : 
       print('%-12s'%nome," \t ",nota)


