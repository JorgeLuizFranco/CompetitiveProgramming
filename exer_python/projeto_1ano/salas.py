#
# Funções para gerenciamento de salas
#
# Formato do armazenamento (dicionário):
# - chave: string
# - valor: tupla, contendo vários dados
#
# [codigo] = (nome, sala, [lista de telefones] )
#
###################################################



from auxiliar import *



#
# Função: existe_sala
#
# Verifica se uma certa chave existe no dicionário.
#
# Parâmetros: dic -   o dicionário
#             chave - a chave a pesquisar
#
# Retorna: True ou False
#

def existe_sala(dic,chave):
    if chave in dic.keys():
        return True
    else:
        return False

####################################################


#
# Função: insere_sala (o C do CRUD)
#
# Recebe os dados de um sala, e insere no dicionário.
#
# Parâmetro: dic - o dicionário
#
# Não retorna nada, pois já insere os dados no dicionário.
#

def insere_sala(dic):

    # Recebe a codigo:
    codigo = input("Digite o códgio do sala:")

    # Verifica se já existe no dicionário:
    
    if existe_sala(dic,codigo):
        print("sala já cadastrado!")
        pausa()
        
    else:

        # A chave não existe.
        # Receber os demais dados do sala:
        
        nome = input("Digite o nome: ")
        capacidade = input("Digite a capacidade: ")
        tipo_exibicao = input("informe o tipo de exibição: ")
        acessibilidade = input("informe a acessibilidade: ")
        # Insere os dados do sala no dicionário.
        # chave: codigo
        # valor: tupla com nome, sala e lista de telefones
        dic[codigo]=(codigo, nome, capacidade, tipo_exibicao, acessibilidade)

        print("Dados inseridos com sucesso!")
        pausa()

####################################################################


#
# Função: mostra_sala (o R do CRUD)
#
# Exibe os dados de um sala, a partir da codigo informada.
#
# Parâmetros: dic   - o dicionário
#             chave - a chave (codigo) que se quer exibir os dados
#
# Não retorna nada, pois apenas exibe dados.
#

def mostra_sala(dic,chave):

    # Verifica se a chave informada existe no dicionário:
    
    if existe_sala(dic,chave):
        
        # Recupera a tupla com os dados relativos a chave informada:
        dados = dic[chave]

        # Exibindo os dados da tupla recuperada.
        # Lembrando, o acesso a dados dentro da tupla
        # é feito da mesma forma que numa lista.
        
        print(f"codigo: {chave}")
        print(f"nome: {dados[0]}")
        print(f"capacidade: {dados[1]}")
        print(f"tipo_exibicao: {dados[2]}")
        print(f"acessibilidade: {dados[3]}")
    else:

        # A chave informada não existe!!
        print("sala não cadastrado!")

######################################################################


#
# Função: altera_sala (o U do CRUD)
#
# Permite alteração dos dados de um sala, a partir da codigo informada.
#
# Parâmetros: dic   - o dicionário
#             chave - a chave (codigo) que se quer alterar os dados
#
# Não retorna nada, pois os dados são alterados
# diretamente no dicionário
#


def altera_sala(dic,chave):

    # Verifica se a chave informada existe no dicionário:
    
    if existe_sala(dic,chave):

        # Exibe os dados relativos a essa chave:    
        mostra_sala(dic,chave)

        # Pede confirmação para permitir alteração:
        confirma = input("Tem certeza que deseja alterar? (S/N): ").upper()
        
        if confirma == 'S':

            # Recebe os novos dados desse sala:

            nome = input("Digite o nome: ")
            capacidade = input("Digite a capacidade: ")
            tipo_exibicao = input("informe o tipo de exibição: ")
            acessibilidade = input("informe a acessibilidade: ")
            
            # Troca os dados do sala no dicionário, nesta codigo:
            dic[chave]=(nome, capacidade, tipo_exibicao, acessibilidade)
            
            print("Dados alterados com sucesso!")
            pausa()
            
        else:

            # Usuário desistiu de alterar dados:
            print("Alteração cancelada!")
            pausa()

    else:

        # A codigo informada não existe!
        print("sala não cadastrado!")
        pausa()

#########################################################################


#
# Função: remove_sala (o D do CRUD)
#
# Permite exclusão dos dados de um sala, a partir da codigo informada.
#
# Parâmetros: dic   - o dicionário
#             chave - a chave (codigo) que se quer apagar os dados
#
# Não retorna nada, pois os dados são apagados
# diretamente no dicionário
#

def remove_sala(dic,chave):
    
    # Verifica se a chave informada existe no dicionário:
    
    if existe_sala(dic,chave):

        # Exibe os dados relativos a essa chave:    
        mostra_sala(dic,chave)

        # Pede confirmação para permitir alteração:
        confirma = input("Tem certeza que deseja apagar? (S/N): ").upper()
        
        if confirma == 'S':

            # Apaga esta chave no dicionário:
            del dic[chave]
       
            print("Dados apagados com sucesso!")
            pausa()
            
        else:

            # Usuário desistiu de apagar dados:
            print("Exclusão cancelada!")
            pausa()

    else:

        # A codigo informada não existe!
        print("sala não cadastrado!")
        pausa()

#########################################################################


#
# Função: mostra_todos_salas
#
# Exibe todos os dados do dicionário, no formato de tabela.
#
# Parâmetro: dic - o dicionário
#
# Não retorna nada, pois apenas exibe os dados.
#

def mostra_todos_salas(dic):

    # Exibe cabecalho do relatório:
    print("Relatório: Todos os salas\n")
    print("codigo - Nome - Capacidade - Tipo de exibição - Acessibilidade\n")
    
    # Vamos percorrer todas as chaves no dicionário:

    for codigo in dic:

        # Pega a tupla com dados dessa codigo:
        tupla = dic[codigo]
        # Monta string com dados:
        linha = codigo + " - " + dic[codigo][0] + " - " + dic[codigo][1] + " - " + dic[codigo][2] + " - " + dic[codigo][3]

        # Exibe a string:
        print(linha)

    ##fim do for

    print("")
    pausa()

############################################################################


#
# Função: grava_salas
#
# Grava os dados do dicionário no arquivo "salas.txt".
#
# Parâmetro: dic - o dicionário
#
# Não retorna nada, pois apenas grava os dados no arquivo.
#

def grava_salas(dic):

    # Abre o arquivo para gravação:
    arq = open("salas.txt", "w")

    # Percorrer todas as codigos no dicionário:
    
    for codigo in dic:

        # Pega a tupla com dados dessa codigo:
        tupla = dic[codigo]
        
        # Monta linha para gravação:
        linha = codigo + ";" + tupla[0] + ";" + tupla[1] + ";" + tupla[2] + ";" + tupla[3] + "\n"

        # Grava no arquivo:
        arq.write(linha)

    ##fim do for

    # Fecha o arquivo:
    arq.close()

###########################################################################


#
# Função: recupera_salas
#
# Se o arquivo "salas.txt" existir, lê os dados para dentro do dicionário.
#
# Parâmetro: dic - o dicionário
#
# Não retorna nada, pois lê os dados diretamente do arquivo.
#
    
def recupera_salas(dic):

    # Verificando se o arquivo existe:
    if ( existe_arquivo("salas.txt") ):

        # Existe! Abrindo arquivo para leitura:
        arq = open("salas.txt", "r")

        # Percorrendo as linhas do arquivo:
        for linha in arq:

            # a linha é:
            # codigo;nome;sala;tel1#tel2#tel3...

            # Tirando o \n do final:
            linha = linha[:len(linha)-1]
            
            # Vamos quebrar por ;
            lista = linha.split(";")

            # codigo esta em lista[0]
            # nome está em lista[1]
            # sala está em lista[2]
            # telefones está em lista[3]
            
            codigo = lista[0]
            nome = lista[1]
            capacidade = lista[2]
            tipo_exibicao = lista[3]
            acessibilidade = lista[4]
            # Colocando os dados no dicionario:
            dic[codigo] = (nome, capacidade, tipo_exibicao, acessibilidade)

        ##fim do for

    ## Não teremos "else", porque se o arquivo não existir,
    ## não precisamos fazer nada, o dicionário já está vazio mesmo...

############################################################################


#
# Função: menu_salas
#
# Gerencia todo o armazenamento (CRUD) dos dados dos salas,
# incluindo leitura/gravação em arquivo.
#
# Parâmetro: dic_salas - o dicionário
#
# Não retorna nada, pois gerencia diretamente o dicionário.
#

def menu_salas(dic_salas):

    # Variável para receber a opção do menu escolhida:
    opc = 0

    # Enquanto o usuário não escolher a opção fim....
    
    while ( opc != 6 ):

        # Exibe o menu:
        print("\nGerenciamento de salas\n")
        print("1 - Insere sala")
        print("2 - Altera sala")
        print("3 - Remove sala")
        print("4 - Mostra um sala")
        print("5 - Mostra todos os salas")
        print("6 - Sair do menu de salas")

        # Recebe a opção do usuário:
        opc = int( input("Digite uma opção: ") )

        # Chama função, conforme opção escolhida:
        
        if opc == 1:
            insere_sala(dic_salas)
            
        elif opc == 2:
            codigo = input("codigo do sala. a ser alterado: ")
            altera_sala(dic_salas, codigo)
            
        elif opc == 3:
            codigo=input("codigo do sala. a ser removido: ")
            remove_sala(dic_salas, codigo)
            
        elif opc == 4:
            codigo=input("codigo do sala. a ser consultado: ")
            mostra_sala(dic_salas, codigo)
            pausa()
            
        elif opc == 5:
            mostra_todos_salas(dic_salas)
            
        elif opc == 6:
            # Se escolheu sair, grava os dados no arquivo.
            grava_salas(dic_salas)

    ##fim do while

##################################################################
        

