def main():
    M= [0]*10
    n= int(input())
    for i in range(n):
        linha= list(input())
        print(linha)
        for x in linha:
            M[int(x)]+=1
    for i in range(10):
        print(i,'-',M[i])

main()
