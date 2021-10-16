def ordena_lista(L1,L2):
    i=0
    for x in L2:
        L1.append(x)
    for i in range(len(L1)):
        j= i+1
        for j in range(i+1,len(L1)):
            if L1[j]<L1[i] and j<len(L1):
                L1[i],L1[j]= L1[j],L1[i]  
            j+=1
        i+=1
    return L1
print(ordena_lista([15,33,126,1024],[3,6,21,45,93]))
