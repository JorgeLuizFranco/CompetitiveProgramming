#include <bits/stdc++.h>

using namespace std;

int v[102],n,m,t,ind,menor;

int main(){
    cin>> n >>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>t;
            v[i]+=t; 
        }
    }
    menor=v[1];
    ind=1;
    for(int i=2; i<=n; i++){
        if(v[i]<menor){
            menor=v[i];
            ind=i;
        }
    }
    cout<< ind;
    return 0;
}