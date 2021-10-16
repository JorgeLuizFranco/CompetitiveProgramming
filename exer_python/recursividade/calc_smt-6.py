def calc_smt(n):
    if(n==0):
        return 0
    else:
        print(n*n,' 1 / ',n,' 3')
        return (n*n+1)/(n+3) + calc_smt(n-1)
    
