#
# Funções para gerenciamento de filme
#
# Formato do armazenamento (dicionário):
# - codigo: string
# - valor: tupla, contendo vários dados
#
# [codigo] = (nome, endereço, datanasc, salario)
#
###################################################



from auxiliar import *



#
# Função: existe_filme
#
# Verifica se uma certa codigo existe no dicionário.
#
# Parâmetros: dic -   o dicionário
#             codigo - a codigo a pesquisar
#
# Retorna: True ou False
#

def existe_filme(dic,codigo):
    if codigo in dic.keys():
        return True
    else:
        return False

####################################################


#
# Função: insere_filme (o C do CRUD)
#
# Recebe os dados de uma filme, e insere no dicionário.
#
# Parâmetro: dic - o dicionário
#
# Não retorna nada, pois já insere os dados no dicionário.
#

def insere_filme(dic):

    # Recebe o codigo:
    codigo = input("Digite o codigo:")

    # Verifica se já existe no dicionário:
    
    if existe_filme(dic,codigo):
        print("filme já cadastrada!")
        pausa()
        
    else:

        # A codigo não existe.
        # Receber os demais dados da filme:
        
        nome = input("Digite o nome: ")
        ano_lancamento = input("Digite o ano de lancamento: ")
        genero = input("Digite o genero: ")

        # Criando lista vazia para receber telefones:
        atores = []

        # Recebe o 1o telefone:
        ator = input("Digite o nome de um ator:")

        # Permitir digitação de telefones enquanto
        # não for um telefone vazio:
        
        while ( ator != "" ):
            atores.append(ator)
            
            # Recebe outro telefone:
            ator = input("Digite o nome de um ator:")
            
        ##Fim do while

        if ( len(atores) == 0 ):
            atores.append("Este depto não tem telefone")
            
        # Insere os dados do departamento no dicionário.
        # codigo: codigo
        # valor: tupla com nome, sala e lista de telefones
        dic[codigo]=(nome, ano_lancamento, genero, atores)
        
        print("Dados inseridos com sucesso!")
        pausa()

####################################################################


#
# Função: mostra_filme (o R do CRUD)
#
# Exibe os dados de uma filme, a partir do codigo informado.
#
# Parâmetros: dic   - o dicionário
#             codigo - a codigo (codigo) que se quer exibir os dados
#
# Não retorna nada, pois apenas exibe dados.
#

def mostra_filme(dic,codigo):
    if existe_filme(dic,codigo):
        
        # Recupera a tupla com os dados relativos a codigo informada:
        dados = dic[codigo]

        # Exibindo os dados da tupla recuperada.
        # Lembrando, o acesso a dados dentro da tupla
        # é feito da mesma forma que numa lista.
        
        print(f"Nome: {dados[0]}")
        print(f"ano_lancamento: {dados[1]}")
        print(f"genero: {dados[2]}")

        atores = " - ".join(dados[3])
        print(f"Atores: {atores}")
        
    else:

        # A codigo informada não existe!!
        print("filme não cadastrada!")

######################################################################


#
# Função: altera_filme (o U do CRUD)
#
# Permite alteração dos dados de uma filme, a partir do codigo informado.
#
# Parâmetros: dic   - o dicionário
#             codigo - a codigo (codigo) que se quer alterar os dados
#
# Não retorna nada, pois os dados são alterados
# diretamente no dicionário
#


def altera_filme(dic,codigo):
    # Verifica se a codigo informada existe no dicionário:
    
    if existe_filme(dic,codigo):

        # Exibe os dados relativos a essa codigo:    
        mostra_filme(dic,codigo)

        # Pede confirmação para permitir alteração:
        confirma = input("Tem certeza que deseja alterá-la? (S/N): ").upper()
        
        if confirma == 'S':

            # Recebe os novos dados dessa filme:
            nome = input("Digite o nome: ")
            ano_lancamento = input("Digite o ano de lancamento: ")
            genero = input("Digite o genero: ")

            # Criando lista vazia para receber telefones:
            atores = []

            # Recebe o 1o telefone:
            ator = input("Digite o nome de um ator:")

            # Permitir digitação de telefones enquanto
            # não for um telefone vazio:
            
            while ( ator != "" ):
                atores.append(ator)
                
                # Recebe outro telefone:
                ator = input("Digite o nome de um ator:")
                
            ##Fim do while

            if ( len(atores) == 0 ):
                atores.append("Este depto não tem telefone")

            # Troca os dados no dicionário, neste codigo:
            dic[codigo]=(nome, ano_lancamento, genero, atores)
            
            print("Dados alterados com sucesso!")
            pausa()
            
        else:

            # Usuário desistiu de alterar dados:
            print("Alteração cancelada!")
            pausa()

    else:

        # O codigo informado não existe!
        print("filme não cadastrada!")
        pausa()

#########################################################################


#
# Função: remove_filme (o D do CRUD)
#
# Permite exclusão dos dados de uma filme, a partir do codigo informado.
#
# Parâmetros: dic   - o dicionário
#             codigo - a codigo (codigo) que se quer apagar os dados
#
# Não retorna nada, pois os dados são apagados
# diretamente no dicionário
#

def remove_filme(dic,codigo):
    
    # Verifica se a codigo informada existe no dicionário:
    
    if existe_filme(dic,codigo):

        # Exibe os dados relativos a essa codigo:    
        mostra_filme(dic,codigo)

        # Pede confirmação para permitir alteração:
        confirma = input("Tem certeza que deseja apagar? (S/N): ").upper()
        
        if confirma == 'S':

            # Apaga esta codigo no dicionário:
            del dic[codigo]
       
            print("Dados apagados com sucesso!")
            pausa()
            
        else:

            # Usuário desistiu de apagar dados:
            print("Exclusão cancelada!")
            pausa()

    else:

        # O codigo informado não existe!
        print("filme não cadastrada!")
        pausa()

#########################################################################


#
# Função: mostra_todas_filme
#
# Exibe todos os dados do dicionário, no formato de tabela.
#
# Parâmetro: dic - o dicionário
#
# Não retorna nada, pois apenas exibe os dados.
#

def mostra_todas_filme(dic):

    # Exibe cabecalho do relatório:
    print("Relatório: Todas as filme\n")
    print("codigo - nome - ano de lancamento - genero - atores\n")
    
    # Vamos percorrer todas as codigos no dicionário:

    for codigo in dic:

        # Pega a tupla com dados desse codigo:
        tupla = dic[codigo]

        atores = "/".join(tupla[3])

        # Monta string com dados:
        linha = codigo + " - " + tupla[0] + " - " + tupla[1] + " - " + tupla[2] + " - " + atores

        # Exibe a string:
        print(linha)

    ##fim do for

    print("")
    pausa()

############################################################################


#
# Função: grava_filme
#
# Grava os dados do dicionário no arquivo "filme.txt".
#
# Parâmetro: dic - o dicionário
#
# Não retorna nada, pois apenas grava os dados no arquivo.
#

def grava_filme(dic):

    # Abre o arquivo para gravação:
    arq = open("filme.txt", "w")

    # Percorrer todos os codigos no dicionário:
    
    for codigo in dic:

        # Pega a tupla com dados desse codigo:
        tupla = dic[codigo]
        atores = "#".join(tupla[3])

        # Monta linha com dados, para gravação:
        linha = codigo+";"+tupla[0]+";"+tupla[1]+";"+tupla[2]+";"+atores+"\n"

        # Grava no arquivo:
        arq.write(linha)

    ##fim do for

    # Fecha o arquivo:
    arq.close()

###########################################################################


#
# Função: recupera_filme
#
# Se o arquivo "filme.txt" existir, lê os dados para dentro do dicionário.
#
# Parâmetro: dic - o dicionário
#
# Não retorna nada, pois lê os dados diretamente do arquivo.
#
    
def recupera_filme(dic):

    # Verificando se o arquivo existe:
    if ( existe_arquivo("filme.txt") ):

        # Existe! Abrindo arquivo para leitura:
        arq = open("filme.txt", "r")

        # Percorrendo as linhas do arquivo:
        for linha in arq:

            # a linha é:
            # codigo;nome;datanasc;salario
            
            # Tirando o \n do final:
            linha = linha[:len(linha)-1]

            # Vamos quebrar por ;
            lista = linha.split(";")

            # codigo esta em lista[0]
            # nome está em lista[1]
            # endereço está em lista[2]
            # datanasc está em lista[3]
            # salario esta em lista[4]
            codigo = lista[0]
            nome = lista[1]
            ano_lancamento = lista[2]
            genero = lista[3]
            atores = lista[4]

            # Criando a lista de telefones:
            listel = atores.split("#")

            # Colocando os dados no dicionario:
            dic[codigo]=(nome, ano_lancamento, genero, listel)

        ##fim do for

    ## Não teremos "else", porque se o arquivo não existir,
    ## não precisamos fazer nada, o dicionário já está vazio mesmo...

############################################################################


#
# Função: menu_filme
#
# Gerencia todo o armazenamento (CRUD) dos dados das filme,
# incluindo leitura/gravação em arquivo.
#
# Parâmetro: dic_filme - o dicionário
#
# Não retorna nada, pois gerencia diretamente o dicionário.
#

def menu_filme(dic_filme):

    # Variável para receber a opção do menu escolhida:
    opc = 0

    # Enquanto o usuário não escolher a opção fim....
    
    while ( opc != 6 ):

        # Exibe o menu:
        print("\nGerenciamento de filme:\n")
        print("1 - Insere filme")
        print("2 - Altera filme")
        print("3 - Remove filme")
        print("4 - Mostra uma filme")
        print("5 - Mostra todas as filme")
        print("6 - Sair do menu de filme")

        # Recebe a opção do usuário:
        opc = int( input("Digite uma opção: ") )

        # Chama função, conforme opção escolhida:
        
        if opc == 1:
            insere_filme(dic_filme)
            
        elif opc == 2:
            codigo = input("codigo a ser alterado: ")
            altera_filme(dic_filme, codigo)
            
        elif opc == 3:
            codigo=input("codigo a ser removido: ")
            remove_filme(dic_filme, codigo)
            
        elif opc == 4:
            codigo=input("codigo a ser consultado: ")
            mostra_filme(dic_filme, codigo)
            pausa()
            
        elif opc == 5:
            mostra_todas_filme(dic_filme)
            
        elif opc == 6:
            # Se escolheu sair, grava os dados no arquivo.
            grava_filme(dic_filme)

    ##fim do while

##################################################################
        

