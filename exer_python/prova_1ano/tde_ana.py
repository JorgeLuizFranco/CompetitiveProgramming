matriz = [[2,"a","b","c"],[3,"d","e","f"],[4,"g","h","i"],[5,"j","k","l"],[6,"m","n","o"],[7,"p","q","r","s"],[8,"t","u","v"],[9,"w","x","y","z"]]
num=""
lista = input().lower()
for x in lista:
    if(x!='-'):
        for elems in matriz:
            if x in elems:
                num+= str(elems[0])
    else:
        num+='-'
print(num)
