f={}
 
def show():
    print("1. Cadastrar produto")
    print("2. Consultar produto")
    print("3. Excluir produto")
    print("4. Produtos na faixa de preços")
    print("5. Consultar preço de pedido")
    print("6. Finalizar")
def a(f):
    w = input("Digite o nome do produto:")
    if(w not in f.keys()):
        preco= float(input("Digite o preco do produto:"))
        f[w]= preco
        print("Produto inserido com sucesso!")
    else:
        print("Alterando preço do produto:",w)
        print("Preço atual:",f[w])
        preco= float(input("Digite o novo preco:"))
        f[w]=preco
        print("Preço alterado com sucesso!")
def b(f,w):
    if(w in f.keys()):
        return f[w]
    else:
        return False
def c(f,w):
    if(w in f.keys()):
        del f[w]
        print("O produto",w,"foi apagado com sucesso!")
    else:
        print("Erro, produto não cadastrado")
def D(f,h1,h2):
    for chave,valor in f.items():
        if(valor>=h1 and valor<=h2):
            print(chave)
def e(f,lista):
    total=0
    for p in lista:
        if(p in f.keys()):
            total+= f[p]
    return total
opc = 0
while opc != 6:
    show()
    opc=int(input("\nEscolha uma opção: "))
    if opc == 1:
        print("\n** 1.Cadastrar produto **\n")
        a(f)
        x=input("Tecle <enter>...")
    if opc == 2:
        w= input("Digite o nome do produto a consultar:")
        if(not b(f,w)):
            print("O produto",w,"não está cadastrado!")
        else:
            print("Produto:",w,"Preço:",b(f,w))
        x=input("Tecle <enter>...")
    if opc == 3:
        w= input("Digite o nome do produto a excluir:")
        print("Deseja realmente apagar o produto",w,"?")
        t= input("Digite s ou n:")
        if(t=='s'):
            c(f,w)
        x=input("Tecle <enter>...")
    if opc==4:
        h1= float(input("Digite o preço inicial da faixa:"))
        h2= float(input("Digite o preço final da faixa:"))
        print("Produtos com preços entre ",h1," e ",h2)
        D(f,h1,h2)
        x=input("Tecle <enter>...")
    if opc==5:
        w=[]
        yp= input("Digite o nome do produto para inserir no pedido (fim para terminar):")
        while(yp!='fim'):
            w.append(yp)
            yp= input("Digite o nome do produto para inserir no pedido (fim para terminar):")
        print("Preço total do pedido:",e(f,w))
        x=input("Tecle <enter>...")
