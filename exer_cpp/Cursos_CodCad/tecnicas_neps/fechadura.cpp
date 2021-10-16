#include <bits/stdc++.h>

using namespace std;

int x,cont,v[1000],n,h;

int main(){
    cin>> n >> h;
    for(int i=0; i<n; i++){
        cin>> v[i];
    }
    for(int i=0; i<n-1;i++){
        if(v[i]!=h){
            x= h-v[i];
            v[i+1]+=x;
            cont+=abs(x);
        }
    }
    cout<< cont;
    return 0;
}