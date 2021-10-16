def multi(x,y):
    if(y==1):
        return x
    else :
        return x+multi(x,y-1)
