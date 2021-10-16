from functools import reduce

def aprovado(T):
	nome,nota=T
	return nota>=6


def valor(T):
    _,nota=T
    return nota
# função valor pega uma tupla e retorna o segundo elemento
Classe=[("João",3),("Asdrubal",7),("Jorge",5),("Ester",8),("Mané",9)]
valores=list(map(valor,Classe))
#map pega cada elemento da lista Classe e aplica a função valor, retornando uma lista de notas
S=reduce(lambda x,y:x+y,valores)
#reduce soma todos os elementos da lista valores, que são as notas
print(Classe)
print('Média = ',end=' ')
print(S/len(Classe))
