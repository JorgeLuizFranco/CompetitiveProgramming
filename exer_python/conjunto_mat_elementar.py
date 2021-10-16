def H(fim,inicio=0):
    if((fim-inicio)%2==0 or ((fim-inicio-1)%3!=0)):
      if((fim-inicio)%3!=0):
         return (fim-inicio)//3+1
      else:
          return (fim-inicio)//3
    else:
      return (fim-inicio)//3

        

