#include<bits/stdc++.h>
 
using namespace std;
 
int main (){
    int a,b,nx,ny,nu,ni,xi,yi;
    set<int> x,y,uniao;
     
    while((cin>>a>>b) && a && b){       
        x.clear();
        y.clear();
        uniao.clear();
         
        while(a--){
            cin>>xi;
            x.insert(xi);
            uniao.insert(xi);
        }
        nx=x.size();
        while(b--){
            cin>>yi;
            y.insert(yi);
            uniao.insert(yi);
        }
        ny=y.size();
         
        nu=uniao.size();
         
        ni=nx+ny-nu;
         
        cout<<(min(nx,ny)-ni)<<endl;
    }
     
    return 0;
}