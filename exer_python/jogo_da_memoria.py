from random import *


def geraMatriz(n):
    matriz= []
    for i in range(n):
       matriz.append([0]*n)
    return matriz


def imprimeMatriz(M,n):
    for i in range(n):
        for j in range(n):
            print(M[i][j], end = "  ")
        print(" ")
    

def sorteiaNumeros (m,n):
    for i in range(int(n*n/2)):
        x,y=0,0
        preencheu = False
        while not(preencheu):
          x= randint(0,n-1)
          y= randint(0,n-1)
          if(m[x][y]==0):
             m[x][y]= i+1
             preencheu = True


def geraCampo(n):
    campo= []
    for i in range(n):
       campo.append(['X']*n)
    return campo

def copiaMatriz(M,n):
    M_copy= geraMatriz(n)
    for i in range(n):
        for j in range(n):
            M_copy[i][j]=M[i][j]
    return M_copy

def leCarta(Msg,n):
    pos = 0
    while pos < 1  or pos > n :
        pos = int(input(Msg))
    return pos - 1

def selecionaNum(campo,M,n):
   cont = 0
   res= True
   while res :
     imprimeMatriz(campo,n)
     x1,y1,x2,y2= -1,-1,-1,-1
     while(x1==x2 and y1==y2):
         campo2=copiaMatriz(campo,n)
         #x1 = int(input("Digite a linha que deseja na 1ª carta : "))-1
         #y1 = int(input("Digite a coluna que deseja na 1ª carta : "))-1
         x1 = leCarta("Digite a linha que deseja na 1ª carta : ",n)
         y1 = leCarta("Digite a coluna que deseja na 1ª carta : ",n)
         campo2[x1][y1]=M[x1][y1]
         imprimeMatriz(campo2,n)
         #x2= int(input("Digite a linha que deseja na 2ª carta : "))-1
         #y2= int(input("Digite a coluna que deseja na 2ª carta : "))-1
         x2 = leCarta("Digite a linha que deseja na 2ª carta : ",n)
         y2 = leCarta("Digite a coluna que deseja na 2ª carta : ",n)
         campo2[x2][y2]=M[x2][y2]
         imprimeMatriz(campo2,n)

     if M[x1][y1]== M[x2][y2]:
          print("\nVocê acertou")
          campo[x1][y1],campo[x2][y2]=M[x1][y1],M[x2][y2]
          cont+=1
     else :
         print("\nVocê errou")
     if(cont==n*n/2):
          return True
     input()
     for j in range(60):
         print("")
def jogo(n):
    M=geraMatriz(n)
    campo = geraCampo(n)
    sorteiaNumeros(M,n)
    sorteiaNumeros(M,n)
    if(selecionaNum(campo,M,n)):
       imprimeMatriz(M,n)
       print("Você conseguiu . Parabéns !!! ")
       

jogo(4)        
      
