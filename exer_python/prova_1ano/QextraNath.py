d={}

def menu():
    print("1. Cadastrar produto")
    print("2. Consultar produto")
    print("3. Excluir produto")
    print("4. Produtos na faixa de preços")
    print("5. Consultar preço de pedido")
    print("6. Finalizar")
def a(d):
    produto = input("Digite o nome do produto:")
    if(produto not in d.keys()):
        preco= float(input("Digite o preco do produto:"))
        d[produto]= preco
        print("Produto inserido com sucesso!")
    else:
        print("Alterando preço do produto:",produto)
        print("Preço atual:",d[produto])
        preco= float(input("Digite o novo preco:"))
        d[produto]=preco
        print("Preço alterado com sucesso!")
def b(d,produto):
    if(produto in d.keys()):
        return d[produto]
    else:
        return False
def c(d,produto):
    if(produto in d.keys()):
        del d[produto]
        print("O produto",produto,"foi apagado com sucesso!")
    else:
        print("Erro, produto não cadastrado")
def D(d,p1,p2):
    for chave,valor in d.items():
        if(valor>=p1 and valor<=p2):
            print(chave)
def e(d,lista):
    total=0
    for p in lista:
        if(p in d.keys()):
            total+= d[p]
    return total
opc = 0
while opc != 6:
    menu()
    opc=int(input("\nEscolha uma opção: "))
    if opc == 1:
        print("\n** 1.Cadastrar produto **\n")
        a(d)
        x=input("Tecle <enter>...")
    if opc == 2:
        produto= input("Digite o nome do produto a consultar:")
        if(not b(d,produto)):
            print("O produto",produto,"não está cadastrado!")
        else:
            print("Produto:",produto,"Preço:",b(d,produto))
        x=input("Tecle <enter>...")
    if opc == 3:
        produto= input("Digite o nome do produto a excluir:")
        print("Deseja realmente apagar o produto",produto,"?")
        t= input("Digite s ou n:")
        if(t=='s'):
            c(d,produto)
        x=input("Tecle <enter>...")
    if opc==4:
        p1= float(input("Digite o preço inicial da faixa:"))
        p2= float(input("Digite o preço final da faixa:"))
        print("Produtos com preços entre ",p1," e ",p2)
        D(d,p1,p2)
        x=input("Tecle <enter>...")
    if opc==5:
        produtos=[]
        pd= input("Digite o nome do produto para inserir no pedido (fim para terminar):")
        while(pd!='fim'):
            produtos.append(pd)
            pd= input("Digite o nome do produto para inserir no pedido (fim para terminar):")
        print("Preço total do pedido:",e(d,produtos))
        x=input("Tecle <enter>...")
print("\n*** FIM DA EXECUÇÃO ***")