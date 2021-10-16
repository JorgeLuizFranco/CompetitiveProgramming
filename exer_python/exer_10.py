def linha(tam,caracter) :
    linha = ""
    for x in range(tam) :
     linha += caracter
    print(linha)
tam = int(input("Digite o tamanho da linha : "))
caracter= input("Digite o caracter desejado")
linha(tam,caracter)
