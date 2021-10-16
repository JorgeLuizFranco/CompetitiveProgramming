
m=[]
n=int(input())
for i in range(n+2):
	v=[]
	for j in range(n+2):
		v.append(-1)
	m.append(v)
for i in range(1,n+1):
	v=list(map(int,input().split()))
	for j in range(1,n+1):
		m[i][j]= v[j-1]
for i in range(5):
	v=list(map(int,input().split()))
	x=v[0]
	y=v[1]
	m[x][y]='*'
	for i in [-1,0,1]:
		for j in [-1,0,1]:
			if(i!=0 or y!=0):
				m[x+i][y+j]='*'

for i in range(1,n+1):
	for j in range(1,n+1):
		print(m[i][j],end=" ")
	print()


