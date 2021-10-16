lista = []
ganhadorX = 0
ganhadorO = 0

X = input()
q=input()
O = input()
for linha in range(3):
    a, b, c = input().split()
    lista.append(a)
    lista.append(b)
    lista.append(c)

for i in range(len(lista)):
    item = lista[i]
    #############
    if i == 0:
        #horizontal
        if item == lista[1] and item == lista[2]:
            if item == 'X':
                ganhadorX += 1
            else:
                ganhadorO += 1
        #vertical
        if item == lista[3] and item == lista[6]:
            if item == 'X':
                ganhadorX += 1
            else:
                ganhadorO += 1
        #diagonal
        if item == lista[4] and item == lista[8]:
            if item == 'X':
                ganhadorX = 1
            else:
                ganhadorO = 1
    #############
    if i == 3:
        #horizontal
        if item == lista[4] and item == lista[5]:
            if item == 'X':
                ganhadorX += 1
            else:
                ganhadorO += 1
    ###############
    if i == 6:
        if item == lista[7] and item == lista[8]:
            if item == 'X':
                ganhadorX += 1
            else:
                ganhadorO += 1
    ############
    if i == 2:
        #vertical
        if item == lista[4] and item == lista[7]:
            if item == 'X':
                ganhadorX += 1
            else:
                ganhadorO += 1
    ##############
    if i == 3:
        #vertical
        if item == lista[5] and item == lista[8]:
            if item == 'X':
                ganhadorX += 1
            else:
                ganhadorO += 1
        #diagonal
        if item == lista[4] and item == lista[6]:
            if item == 'X':
                ganhadorX = 1
            else:
                ganhadorO = 1
#prints
if ganhadorX > ganhadorO:
    print(X, 'Ganhou')
elif ganhadorX < ganhadorO:
    print(O, 'Ganhou')
elif ganhadorX == ganhadorO:
    print('Empatou!')
    
    
        
