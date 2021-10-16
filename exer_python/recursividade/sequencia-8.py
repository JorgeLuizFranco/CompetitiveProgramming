def F(n):
    if n==1:
        return 1
    elif n==2:
        return 2
    else:
        return 2*F(n-1)+3*F(n-2)
