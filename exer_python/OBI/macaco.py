def macaco():
  n= int(input())
  s=0
  cont=0
  M=[]
  for i in range(n):
    M.append(int(input()))
  for i in range(n):
    s+= M[i]
    cont+=1
    if(s>=10**6):
      return cont
print(macaco())
