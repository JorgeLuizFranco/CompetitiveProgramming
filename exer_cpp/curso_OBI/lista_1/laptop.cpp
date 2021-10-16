#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0)

using namespace std;

struct laptop
{
    int preco;
    int qual;
};

bool compare(laptop l, laptop g){
    return (l.preco< g.preco && l.qual>g.qual);
}

bool compare2(laptop l, laptop g){
   
    return l.preco< g.preco;
}



int main(){
    int n,i,j; cin>>n;
    laptop V[n];
    for(i=0;i<n;i++){
        cin>> V[i].preco >> V[i].qual;
    }
    sort(V,V+n,compare2);
    for(i=0; i<n-1;i++)    
            if(compare(V[i],V[i+1])){
                cout<< "Happy Alex";                
                break;                
        }
    
    if(i==n-1){
        cout<< "Poor Alex";
    }
    return 0;
}