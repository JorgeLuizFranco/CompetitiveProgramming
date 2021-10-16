def fatorial(n) :
    fat=1
    for x in range(n):
        fat*=(x+1)
    return fat
print(fatorial(111))
