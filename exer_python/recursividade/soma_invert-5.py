def soma_invert(n):
    if(n==1):
        return 1
    else:
        return 1/n+ soma_invert(n-1)
    
