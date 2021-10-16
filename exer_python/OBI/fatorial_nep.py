def fatorial(n):
    if n==0:
        return 1
    else:
        return fatorial(n-1)*n
n= int(input())
print(fatorial(n))
