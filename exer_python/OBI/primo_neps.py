def eh_primo(x):
    if(x%2==0 and x!=2):
        return False
    else:
        for i in range(3,x//2,2):
            if(x%i==0):
                return False
    return True
    

x = int(input())
if eh_primo(x):
	print('S')
else:
	print('N')
