Aa=int(input())
Da=int(input())
Ab=int(input())
Db=int(input())


if(Aa>Db and Ab<=Da):
    print(1)
elif(Ab>Da and Aa<=Db):
    print(2)
else:
    print(-1)