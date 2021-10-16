#include <bits/stdc++.h>

using namespace std;

struct consulta{
    int ini,fim;
};

int n,cont=1;
consulta c[10000];

bool cmp(consulta c1, consulta c2){
    if(c1.fim  < c2.fim){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    cin>> n;
    for(int i=0; i<n; i++){
        cin>> c[i].ini >> c[i].fim;
    }
    sort(c,c+n,cmp);
    /*for(int i=0; i<n; i++){
        cout<<"ini:" << c[i].ini << " fim:" << c[i].fim << '\n';
    }*/
    int fim= c[0].fim;
    for(int i=1; i<n; i++){
        if(fim<=c[i].ini){
            cont++;
            fim= c[i].fim;
        }
    }
    cout<< cont;
    
    return 0;
}