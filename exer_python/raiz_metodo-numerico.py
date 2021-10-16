
def sqrt(N):
  res= 0
  x1=0
  x2= N
  xm= (x1+x2)/2
  y= xm**2
  while y-N<0.01 or N-y<0.01:
     print("N: ",N," x1: ",x1," x2: ",x2," xm: ",xm," y: ",y," res: ",res)

     if y>=N and y-N<0.01:
         res=xm
         return res
     elif y<=N and N-y<0.01:
         res=xm
         return res
     elif y>N:
         x2=xm
     else:
         x1=xm
     xm= (x1+x2)/2
     y= xm**2
  return res


