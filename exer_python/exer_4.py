def ex1():
  h = float(input("Altura : "))
  p = float(input("Peso : "))
  imc = p/(h*h)
  if imc<= 18.5 :
    print("Baixo Peso")
  elif imc<= 24.9 :
    print("Normal")
  elif imc<= 29.9 :
    print("Sobrepeso")
  else :
    print("Obesidade")
