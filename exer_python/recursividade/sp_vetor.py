def sp_vetor(vet):
    if len(vet)==1:
        return (vet[0],vet[0])
    else:
        t= sp_vetor(vet[1:])
        return t[0]+vet[0],t[1]*vet[0] 
