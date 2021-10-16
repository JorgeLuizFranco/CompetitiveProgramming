def risadão(palavra):
    #[h,a,h,a,h,a] [r,i,a,j,k,j,d,h,h,i,h,h,j,a,k]

    vogais= []
    for letra in palavra:
        if letra in ['a','e','i','o','u']:
            vogais.append(letra)
    i = 0 #[a,a,a] [i,a,i,a]
    f=len(vogais)-1
    while i<f and vogais[i]==vogais[f]:
        i+=1
        f-=1
    if (i>=f):
        print('S')
    else:
        print('N')
        
risadão(input())