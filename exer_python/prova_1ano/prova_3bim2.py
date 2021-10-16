#
# CÓDIGO BASE - Sistema tradutor
#
# Os dados são armazenados em um dicionário
#
# Chave do dicionário: palavra em inglês (String)
#
# Valor do dicionário: tupla, contendo as palavras (strings) em português
#
#
# Exemplo:
#
traducoes = { 'table': ( 'mesa', 'tabela' ),
 'old': ( 'velho', 'antigo' ),
 'the': ( 'o', 'a', 'os', 'as' ),
 'corner': ( 'esquina', 'canto' ),
 'sing': ( 'cantar', 'canto' )
 }
#
# Função que exibe um menu de opções:
#
def menu():
    print("1. Cadastrar tradução")
    print("2. Tradução Inglês-Português")
    print("3. Tradução Português-Inglês")
    print("4. Sair")
def a(traducoes):
    ing= input("Digite a palavra em inglês:")
    trads=[]
    trad=' silvana é chata '
    while(trad!=''):
        trad=input("Digite uma tradução para "+ing+". <enter> para fim.")
        if(trad!=''):
            trads.append(trad)
    traducoes[ing]=tuple(trads)
def b(ing,traducoes):
    trads=""
    if(ing in traducoes.keys()):
        lista= list(traducoes[ing])
        for trad in lista:
            trads+= ' - '+trad
        return trads
    else:
        print(ing+" não está cadastrada!")
def c(port,traducoes):
    for i in traducoes.values():
        if port in i:    
            res=""
            for key, values in traducoes.items():
                if(port in values):
                    res+= ' - '+key
            return res
    else:
        print(port+" não está cadastrada!")
##############################

# Programa principal #
##############################
# variável para receber a opção do usuário:
opc = 0
while opc != 4:
    # exibe o menu na tela:
    menu()
    # recebe a opção do usuário:
    opc=int(input("\nEscolha uma opção: "))

    if opc == 1:
        print("\n** 1.Cadastrar tradução **\n")
        a(traducoes)
        print(traducoes)
        lixo= input("Digite <enter> para continuar... ")
    # Questão 4a
        
    if opc == 2:
        print("\n** 2.Tradução Inglês-Português **\n")
        ing= input("Digite a palavra em inglês: ")
        print("Palavra em inglês:",ing)
        print("Traduções",b(ing,traducoes))
        lixo= input("Digite <enter> para continuar... ")
    # Questão 4b
    if opc == 3:
        print("\n** 3.Tradução Português-Inglês **\n")
        print(traducoes.values())
        port=input("Digite a palavra em português: ")
        print("Palavra: ",port)
        print("É tradução para",c(port,traducoes))
        lixo= input("Digite <enter> para continuar... ")
    # Questão 4c


print("\n*** Fim ***")