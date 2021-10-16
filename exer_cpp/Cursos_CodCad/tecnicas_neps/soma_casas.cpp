#include <bits/stdc++.h>

using namespace std;

int  n,k,v[(int)1e5],ini,fim,meio;


int main(){
    cin>> n;
    for(int i=0; i<n; i++){
        cin>> v[i];
    }
    cin>> k;
    fim=n;
    for(int i=0; i<n; i++){
        ini=0,fim=n;
        while (ini<fim){
            meio= (ini+fim)/2;
            if(v[meio]+v[i]==k){
                cout<< min(v[meio],v[i]) << ' '<< max(v[meio],v[i]); 
                return 0;
            }    
            if(v[meio]+v[i]>k) fim=meio;
            else ini=meio+1;
        }
    }
    return 0;
}