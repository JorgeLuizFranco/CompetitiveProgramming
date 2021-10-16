M= [[0,10,7,0,0],[10,0,5,3,18],[7,5,0,10,0],[0,3,10,0,9],[0,18,0,9,0]]

id = ['a','b','c','d','e','f','g']


def identifica(nó):
    return ord(nó) - ord('a')

def identifica_nome(indice):
    return chr(indice + ord('a'))

def ligacao(a):    
    b=0
    while (M[a][b]==0):
        b+=1
    return b,M[a][b]   
    
def caminho(a,b,L):
    if M[a][b] > 0:
        L.append(identifica_nome(b))
        return M[a][b]
    else: 
       vizinho, dv = ligacao(a)
       L.append(identifica_nome(vizinho))
       return dv + caminho(vizinho,b,L)


def encontra_caminho():
    inicio = 'a'
    fim =  'd'
    L = [inicio]
    dist = caminho(identifica(inicio),identifica(fim),L)
    print ("Distancia = ",dist)
    print(L)
    

encontra_caminho()

