#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int x_1,x_2,y_1,y_2,n,x,y,t;

int main(){_
    while(cin>>x_1>>y_1>>x_2>>y_2 and x_1){
        int cont=0;
        cin>>n;
        while (n--)
        {
            cin>>x>>y;
            if(x>=x_1 and x<=x_2 and y>=y_2 and y<=y_1){
                cont++;
            }
        }
        cout<< "Teste "<<++t<<'\n'<<cont<<'\n';
    }
    return 0;
}