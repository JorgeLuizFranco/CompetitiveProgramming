def bfs(begin, end):
    visited = [[ False for i in range(n)] for i in range(n)]
    queue= []
    queue.append((begin[0],begin[1],0))
    while(len(queue)!=0):
      for i,j,cont in queue:
        if((i,j)==end):
          return cont
        if esquinas[i][j][0]==1:
          if not visited[i][j-1]:
            visited[i][j-1]=True
            queue.append((i,j-1,cont+1))
        if esquinas[i][j][1]==1:
          if not visited[i][j+1]:
            visited[i][j+1]=True
            queue.append((i,j+1,cont+1))
        if esquinas[i][j][2]==1:
          if not visited[i-1][j]:
            visited[i-1][j]=True
            queue.append((i-1,j,cont+1))
        if esquinas[i][j][3]==1:
          if not visited[i+1][j]:
            visited[i+1][j]=True
            queue.append((i+1,j,cont+1))
        #1 3 0 3
n= int(input())
esquinas=[]
for i in range(n):
  rua=[]
  linha=list(map(int,input().split()))
  #print(linha)
  for j in range(0,n*4,4):
    esquina=[]
    for k in range(4):
      esquina.append(linha[j+k])
    #print(esquina)
    rua.append(tuple(esquina))
  esquinas.append(tuple(rua)) 
for lixo in esquinas:
  print(lixo)
print('\n')

t= int(input())
while(t!=0):
  t-=1
  beginx,beginy,endx,endy=map(int,input().split())
  beginy=n-beginy
  endy=n-endy
  bfs((beginx,beginy),(endx,endy))

  

#esquinas=reversed(esquinas)
#for lixo in esquinas:
#  print(lixo)
#5
#1 3 0 3
#2 3 3 0
#2 3 0 0
#3 1 3 2
#0 3 0 0