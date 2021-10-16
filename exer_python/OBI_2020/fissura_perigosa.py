n,f= map(int,input().split())
M=[]
for i in range(n):
    M.append(list(map(int,input())))
    for j in range(n):
        if i==0 and j==0:
            if M[i][j]<=f:
                M[i][j]='*'
        else:
            if j==n-1 or j==0:
                if M[i-1][j]=='*' and M[i][j]<=f:
                    M[i][j]='*'
            else:
                if (M[i-1][j]=='*' or M[i][j-1]=='*') and M[i][j]<=f:
                    M[i][j]='*'
    for j in range(n-1,-1,-1):
        if i==0 and j==0 and M[i][j]!='*':
            if M[i][j]<=f:
                M[i][j]='*'
        else:
            if j==n-1 or j==0:
                if M[i-1][j]=='*' and M[i][j]!='*':
                    if M[i][j]<=f :
                        M[i][j]='*'
            else:
                if (M[i-1][j]=='*' or M[i][j-1]=='*') and M[i][j]!='*':
                    if M[i][j]<=f:
                        M[i][j]='*'

for i in range(n):
    for j in range(n):
        print(M[i][j],end='')
    print()
