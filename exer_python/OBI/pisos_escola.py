def pisos_escola():
     L= int(input())
     C= int(input())
     t2= (L-1)*2 + (C-1)*2
     t1= L*C*2 - t2//2 -1
     print(t1)
     print(t2)

#pisos_escola()

     
#========================
def fitas():
     N = int(input())
     linha= input()
     Fita = linha.split()
     for i in range(len(Fita)):
          Fita[i]= int(Fita[i])
     L=[]     
     for i in range(N):         
          if Fita[i]==0:
               L.append(i)
     L.reverse()
     if L!=[]:
          a = L.pop()
     b=a
     for i in range(a+1):
          Fita[i]=a-i
     while L!=[]:
          b=L.pop()
          m= int((a+b)/2)
          
          for i in range(a+1,m+1):
               
               Fita[i]=i-a               
          for i in range(m+1,b):
               
               Fita[i]=b-i
          a=b
     for i in range(b+1,N):
               Fita[i]=i-b
     return Fita

M=fitas()
for i in range(len(M)):
     print(M[i] , end = ' ')  
               
     
