#include <bits/stdc++.h>

using namespace std;


int main(){
    int n,k;
    cin>> n >>k;
    int cont=k;
    int V[n];
    for (int i = 0; i < n; i++)
    {
        cin>> V[i];
    }
    sort(V,V+n,greater<int>());
    if(V[k-1]==V[k]){
        cont++;
        int i=k+1;
        while(V[k]==V[i]){
            cont++;
            i++;
        }
    }
    cout<< cont;
    return 0;
}