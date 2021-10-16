#include <bits/stdc++.h>

using namespace std;

struct pais{
    int cod,ouro,prata,bronze;
};

bool cmp(pais a, pais b){
    if(a.ouro!=b.ouro){
        return (a.ouro > b.ouro);
    }
    else if(a.prata!= b.prata){
        return (a.prata > b.prata);
    }
    else if(a.bronze!= b.bronze){
        return (a.bronze > b.bronze);
    }
    else{
        return  (a.cod < b.cod);
    }
}

int main(){
    int n,m,o,p,b;
    cin>>n>>m;
    pais P[n];
    for (int i = 0; i < n;i++)
    {
        P[i].cod= i+1;
        P[i].ouro= 0;
        P[i].prata= 0;
        P[i].bronze= 0;
    }
    
    for(int i=0; i<m; i++){
        cin>> o>> p >> b;
        P[o-1].ouro++; P[p-1].prata++; P[b-1].bronze++;
    }
   
   
    sort(P,P+n,cmp);
    for(int i=0; i<n ;i++){
        cout<< P[i].cod << ' ';
    }
    return 0;
}