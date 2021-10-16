#
# Funções para gerenciamento de LOTAÇÕES
# (quando uma pessoa trabalha em um departamento,
#  dizemos que ela está LOTADA naquele departamento)
#
# Formato do armazenamento (dicionário):
# - chave: tupla, contendo o CPF da pessoa e a sigla do departamento
# - valor: tupla, contendo ano de ingresso e cargo
#
# [ (CPF, sigla) ] = (ano ingresso, cargo)
#
###################################################



from auxiliar import *
from filme import *
from salas import *



#
# Função: existe_sessao
#
# Verifica se uma certa chave existe no dicionário.
#
# Parâmetros: dic -   o dicionário
#             chave - a chave a pesquisar
#
# Retorna: True ou False
#

def existe_sessao(dic,chave):
    if chave in dic.keys():
        return True
    else:
        return False

####################################################


#
# Função: insere_sessao (o C do CRUD)
#
# Recebe os dados de uma lotação, e insere no dicionário.
#
# Parâmetros: dicP - o dicionário de pessoas
#             dicD - o dicionário de departamentos
#             dicL - o dicionário de lotações
#
# Não retorna nada, pois já insere os dados no dicionário.
#

def insere_sessao(dicP, dicD, dicL):

    # Recebe o CPF:
    CPF = input("Digite o CPF:")

    # Verifica se existe este CPF:
    
    if existe_pessoa(dicP,CPF):

        # OK, a pessoa existe.

        # Recebe a sigla do departamento:
        sigla = input("Digite a sigla do departamento:")
        
        # Verifica se existe este departamento:
        if existe_depto(dicD, sigla):

            # OK, o departamento existe.

            # Montando a tupla que vai ser a chave (com cpf e sigla):
            chave = (CPF, sigla)

            # Verificando se esta lotação já existe:
            if ( existe_sessao(dicL, chave) ):

                # Ja existe!
                print("Esta lotação já existe!")
                pausa()

            else:

                # Não existe ainda.

                # Recebendo os demais dados:
                ano = int( input("Digite o ano de ingresso:") )
                cargo = input("Digite o cargo:")

                # Montando a tupla que vai ser o valor associado a chave:
                valor = (ano, cargo)

                # Cria essa lotação no dicionário:
                dicL[ chave ] = valor

                print("Dados inseridos com sucesso!")
                pausa()

        else:

            # O departamento digitado não existe!
            print("Este departamento não existe!")
            pausa()

    else:

        # O CPF digitado não existe!
        print("Este CPF não existe!")
        pausa()

####################################################################


#
# Função: mostra_sessao (o R do CRUD)
#
# Exibe os dados de uma sessao, a partir do CPF e da sigla informados.
#
# Parâmetros: dicP  - o dicionário de pessoas
#             dicD  - o dicionário de departamentos
#             dicL  - o dicionário de lotações
#             cpf   - o CPF da lotação
#             sigla - a sigla do departamento
#
# Não retorna nada, pois apenas exibe dados.
#

def mostra_sessao(dicP, dicD, dicL, cpf, sigla):

    # Montando uma tupla com o cpf e a sigla:
    chave = (cpf, sigla)

    # Verifica se a chave informada existe no dicionário:
    
    if existe_sessao(dicL,chave):
        
        # Recupera a tupla com os dados relativos a chave informada:
        dados = dicL[chave]

        print("Dados da lotação:")
        print("-----------------\n")

        # Mostrando os dados da pessoa:
        print("Pessoa:")
        print("-------")
        mostra_pessoa(dicP, cpf)
        print()

        # Mostrando os dados do departamento:
        print("Departamento:")
        print("-------------")
        mostra_depto(dicD, sigla)
        print()

        # Exibindo os dados da lotação:
        print(f"Ano de ingresso: {dados[0]}")
        print(f"Cargo: {dados[1]}")
        
    else:

        # A chave informada não existe!!
        print("A lotação informada não existe")

######################################################################


#
# Função: altera_sessao (o U do CRUD)
#
# Permite alteração dos dados de uma sessao, a partir do CPF/sigla informados.
#
# Parâmetros: dicP  - o dicionário de pessoas
#             dicD  - o dicionário de departamentos
#             dicL  - o dicionário de lotações
#             cpf   - o CPF da lotação
#             sigla - a sigla do departamento
#
# Não retorna nada, pois os dados são alterados
# diretamente no dicionário
#


def altera_sessao(dicP, dicD, dicL, cpf, sigla):

    # Montando uma tupla(chave) com cpf e sigla:
    chave = (cpf, sigla)

    # Verifica se a chave informada existe no dicionário:
    if existe_sessao(dicL, chave):

        # Exibe os dados relativos a essa chave:    
        mostra_sessao(dicP, dicD, dicL, cpf, sigla)

        # Pede confirmação para permitir alteração:
        confirma = input("Tem certeza que deseja alterá-la? (S/N): ").upper()
        
        if confirma == 'S':

            # Recebe os novos dados dessa sessao:
            ano = int( input("Digite o ano de ingresso:") )
            cargo = input("Digite o cargo:")

            # Montando a tupla que vai ser o valor associado a chave:
            valor = (ano, cargo)

            # Troca os dados no dicionário:
            dicL[ chave ] = valor
            
            print("Dados alterados com sucesso!")
            pausa()
            
        else:

            # Usuário desistiu de alterar dados:
            print("Alteração cancelada!")
            pausa()

    else:

        # A sessao informada não existe!
        print("Esta lotação não está cadastrada!")
        pausa()

#########################################################################


#
# Função: remove_sessao (o D do CRUD)
#
# Permite exclusão dos dados de uma pessoa, a partir do CPF informado.
#
# Parâmetros: dicP  - o dicionário de pessoas
#             dicD  - o dicionário de departamentos
#             dicL  - o dicionário de lotações
#             cpf   - o CPF da lotação
#             sigla - a sigla do departamento
#
# Não retorna nada, pois os dados são apagados
# diretamente no dicionário
#

def remove_sessao(dicP, dicD, dicL, cpf, sigla):

    # Montando uma tupla(chave) com cpf e sigla:
    chave = (cpf, sigla)    
    
    # Verifica se a chave informada existe no dicionário:
    
    if existe_sessao(dicL,chave):

        # Exibe os dados relativos a essa sessao:
        mostra_sessao(dicP, dicD, dicL, cpf, sigla)

        # Pede confirmação para permitir alteração:
        confirma = input("Tem certeza que deseja apagar? (S/N): ").upper()
        
        if confirma == 'S':

            # Apaga esta chave no dicionário:
            del dicL[chave]
       
            print("Dados apagados com sucesso!")
            pausa()
            
        else:

            # Usuário desistiu de apagar dados:
            print("Exclusão cancelada!")
            pausa()

    else:

        # A sessao informada não existe!
        print("Esta lotação não está cadastrada!")
        pausa()

#########################################################################


#
# Função: mostra_todas_lotacoes
#
# Exibe todas as lotações.
#
# Parâmetros: dicP  - o dicionário de pessoas
#             dicD  - o dicionário de departamentos
#             dicL  - o dicionário de lotações
#
# Não retorna nada, pois apenas exibe os dados.
#

def mostra_todas_lotacoes(dicP, dicD, dicL):

    # Exibe cabecalho do relatório:
    print("Relatório: Todas as lotações")
    print("----------------------------\n")
    
    # Vamos percorrer todas as chaves no dicionário:

    for chave in dicL:

        # Pega os dados dessa chave:
        cpf = chave[0]
        sigla = chave[1]

        # Exibe os dados da lotação:
        mostra_sessao(dicP, dicD, dicL, cpf, sigla)

        print("----------------------------\n")

    ##fim do for

    print("")
    pausa()

############################################################################


#
# Função: grava_lotacoes
#
# Grava os dados do dicionário no arquivo "lotacoes.txt".
#
# Parâmetro: dic - o dicionário de lotações
#
# Não retorna nada, pois apenas grava os dados no arquivo.
#

def grava_lotacoes(dic):

    # Abre o arquivo para gravação:
    arq = open("lotacoes.txt", "w")

    # Percorrer todas as loteçeõs no dicionário:
    
    for chave in dic:

        # Pega os dados dessa chave:
        cpf = chave[0]
        sigla = chave[1]

        # Pega a tupla com dados dessa chave:
        tupla = dic[chave]

        # Pega os dados dessa tupla:
        # (obs: ja convertendo o ano ingresso para string)
        anoing = str( tupla[0] )
        cargo = tupla[1]

        # Monta linha com dados, para gravação:
        linha = cpf+";"+sigla+";"+anoing+";"+cargo+"\n"

        # Grava no arquivo:
        arq.write(linha)

    ##fim do for

    # Fecha o arquivo:
    arq.close()

###########################################################################


#
# Função: recupera_lotacoes
#
# Se o arquivo "lotacoes.txt" existir, lê os dados para dentro do dicionário.
#
# Parâmetro: dic - o dicionário
#
# Não retorna nada, pois lê os dados diretamente do arquivo.
#
    
def recupera_lotacoes(dic):

    # Verificando se o arquivo existe:
    if ( existe_arquivo("lotacoes.txt") ):

        # Existe! Abrindo arquivo para leitura:
        arq = open("lotacoes.txt", "r")

        # Percorrendo as linhas do arquivo:
        for linha in arq:

            # a linha é:
            # cpf;sigla;anoingresso;cargo
            
            # Tirando o \n do final:
            linha = linha[:len(linha)-1]

            # Vamos quebrar por ;
            lista = linha.split(";")

            # cpf esta em lista[0]
            # sigla está em lista[1]
            # anoingresso está em lista[2]
            # cargo está em lista[3]
            cpf = lista[0]
            sigla = lista[1]
            anoingresso = int( lista[2] )
            cargo = lista[3]

            # Gerando chave com cpf e sigla:
            chave = (cpf, sigla)

            # Colocando os dados no dicionario:
            dic[chave] = (anoingresso, cargo)

        ##fim do for

    ## Não teremos "else", porque se o arquivo não existir,
    ## não precisamos fazer nada, o dicionário já está vazio mesmo...

############################################################################


#
# Função: relatorio
#
# Exibe as lotacoes com ano de ingresso entre X e Y.
#
# Parâmetros: dicP  - o dicionário de pessoas
#             dicD  - o dicionário de departamentos
#             dicL  - o dicionário de lotações
#             X     - ano inicial do período
#             Y     - ano final do período
#
# Não retorna nada, pois apenas exibe os dados.
#

def relatorio(dicP, dicD, dicL, X, Y):

    # Exibe cabecalho do relatório:
    print("Relatório: Lotações com ano entre", X, " e ", Y)
    print("---------------------------------------------\n")
    
    # Vamos percorrer todas as chaves no dicionário:

    for chave in dicL:

        # Pega o valor referente a esta chave:
        valor = dicL[chave]

        # O ano de ingresso é o elemento valor[0].
        anoingr = valor[0]

        # Verifica se o ano de ingresso está entre X e Y:

        if ( anoingr >= X and anoingr <= Y ):

            # Esta lotação está nos limites pedidos.
            # Exibe os dados.

            # Pega os dados dessa chave:
            cpf = chave[0]
            sigla = chave[1]

            # Exibe os dados da lotação:
            mostra_sessao(dicP, dicD, dicL, cpf, sigla)

            print("----------------------------\n")

        ##fim do if, se não se enquadra nos limites, não faz nada!

    ##fim do for

    print("")
    pausa()

############################################################################


#
# Função: menu_lotacoes
#
# Gerencia todo o armazenamento (CRUD) dos dados das lotações,
# incluindo leitura/gravação em arquivo.
#
# Parâmetros: dicP  - o dicionário de pessoas
#             dicD  - o dicionário de departamentos
#             dicL  - o dicionário de lotações
#
# Não retorna nada, pois gerencia diretamente o dicionário.
#

def menu_lotacoes(dicP, dicD, dicL):

    # Variável para receber a opção do menu escolhida:
    opc = 0

    # Enquanto o usuário não escolher a opção fim....
    
    while ( opc != 6 ):

        # Exibe o menu:
        print("\nGerenciamento de lotações\n")
        print("1 - Insere Lotação")
        print("2 - Altera Lotação")
        print("3 - Remove Lotação")
        print("4 - Mostra uma Lotação")
        print("5 - Mostra todas as Lotações")
        print("6 - Sair do menu de Lotações")

        # Recebe a opção do usuário:
        opc = int( input("Digite uma opção: ") )

        # Chama função, conforme opção escolhida:
        
        if opc == 1:
            insere_sessao(dicP, dicD, dicL)
            
        elif opc == 2:
            print("Alterar lotação:")
            cpf = input("Digite o CPF: ")
            sigla = input("Digite a sigla do depto.")
            altera_sessao(dicP, dicD, dicL, cpf, sigla)
            
        elif opc == 3:
            print("Remover lotação:")
            cpf = input("Digite o CPF: ")
            sigla = input("Digite a sigla do depto.")
            remove_sessao(dicP, dicD, dicL, cpf, sigla)
            
        elif opc == 4:
            print("Consultar lotação:")
            cpf = input("Digite o CPF: ")
            sigla = input("Digite a sigla do depto.")
            mostra_sessao(dicP, dicD, dicL, cpf, sigla)
            pausa()
            
        elif opc == 5:
            mostra_todas_lotacoes(dicP, dicD, dicL)
            
        elif opc == 6:
            # Se escolheu sair, grava os dados no arquivo.
            grava_lotacoes(dicL)

    ##fim do while

##################################################################



