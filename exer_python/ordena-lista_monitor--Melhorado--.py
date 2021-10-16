def ordena_lista(L1,L2):
    L= []
    i,j=0,0
    while i<len(L1) and j<len(L2):        
        if(L1[i]==L2[j]):
            j+=1
            #del L2[j]
        
        elif(L1[i]<L2[j]):
            L.append(L1[i])
            i+=1
    
        else:
            L.append(L2[j])
            j+=1
    if(i<len(L1)):
       while i<len(L1):
           L.append(L1[i])
           i+=1
    elif(j<len(L2)):
        while j<len(L2):
            L.append(L2[j])
            j+=1
    return L

print(ordena_lista([3,6,9,12,15,44],[1,4,6,8,9,11,12,18,21]))
            
