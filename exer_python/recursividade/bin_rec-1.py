def bin(n):
    if n==0:
        return ""
    else:
        return  bin(n//2) + str(n%2) 
