
palavra= input("Digite a palavra: ")
caracter= input("Digite o caracter: ")
def acha_indice(palavra,caracter) :
   i=0
   for x in palavra:
      if x== caracter:
        return i
      i+=1
   return 'inexistente'

print("O índice é : ",acha_indice(palavra,caracter))
