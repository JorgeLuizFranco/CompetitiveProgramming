#include <bits/stdc++.h>
#define INF (int)1e9
using namespace std;

long long n,m,a[10000005],f[100000005],o;

long long bb(int x){
    int ini=1,fim=n-1,meio;
    //if(x<a[1]) return f[1];
    while(ini<=fim){
        meio= (ini+fim)/2;
        if(a[meio]==x) return f[meio+1];
        else if(a[meio]<x and a[meio+1]>x) return f[meio+1];
        if (a[meio] >= x) {fim= meio-1;}
        else{
            ini=meio+1;
        }
    }
    return f[meio+1];
}

int main(){
    cin>> n >>m;
    for(int i=1; i<=n-1; i++){
        cin>> a[i];
    }
    a[n]=INF;
    for(int i=1; i<=n; i++){
        cin>> f[i];
    }
    for(int i=0; i<m; i++){
        cin>> o;
        o=bb(o); 
        cout<< o << ' ';      
    }
    return  0;
}