def multi(n,a,c):
    if a*c >n:
        return 'OVERFLOW'
    else:
        return 'OK'
def soma(n,a,c):
    if a+c>n:
        return 'OVERFLOW'
    else:
        return 'OK'
n = int(input())
a,b,c= input().split()
a,c=int(c),int(a)
print(multi(n,a,c)) if b=='*' else print(soma(n,a,c))


