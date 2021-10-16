from filme import *
from salas import *
from sessao import *
from auxiliar import *

# Criando dicionarios para armazenamento de dados:

BDfilme = {}
BDsalas = {}
BDlotacoes = {}

# Carregando os dados dos arquivos nos dicionários:

recupera_filme(BDfilme)
recupera_salas(BDsalas)
recupera_lotacoes(BDlotacoes)

# Variável para receber a opção do menu escolhida:
opc = 0

# Enquanto o usuário não escolher a opção fim....
    
while ( opc != 5 ):

    # Exibe o menu:
        
    print("1 - Gerenciar filme")
    print("2 - Gerenciar salas")
    print("3 - Gerenciar sessões")
    print("4 - Relatório")
    print("5 - Finalizar programa")

    # Recebe a opção do usuário:
    opc = int( input("Digite uma opção: ") )

    # Chama função, conforme opção escolhida:
        
    if opc == 1:
        menu_filme(BDfilme)
        print("\n\n\n\n")
            
    elif opc == 2:
        menu_salas(BDsalas)
        print("\n\n\n\n")
            
    elif opc == 3:
        menu_lotacoes(BDfilme, BDsalas, BDlotacoes)
        print("\n\n\n\n")

    elif opc == 4:
        X = int( input("Digite o ano inicial:") )
        Y = int( input("Digite o ano final:") )
        relatorio(BDfilme, BDsalas, BDlotacoes, X, Y)
        print("\n\n\n\n")
        

##fim do while

print("\n\n*** FIM DO PROGRAMA ***\n\n")





