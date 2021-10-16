def multi_inc(x,y):
    if(x==0 and  y==0):
        return 1
    elif(x==0):
        return multi_inc(x,y-1)
    else:
        return multi_inc(x-1,y) +1
