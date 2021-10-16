x1,y1,x2,y2= map(int,input().split())
x3,y3,x4,y4= map(int,input().split())
Lx= [x1,x2,x3,x4]
Ly=[y1,y2,y3,y4]
Lx.sort()
Ly.sort()
xa= Lx[1]
xb= Lx[2]
ya= Ly[1]
yb = Ly[2]
A = (xb-xa)*(yb-ya)
print(A)
