#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,cont=0;
    cin>>n;
    for(int x: {100,50,25,10,5,1}){
        while(n>=x){
            n-=x;
            cont++;
        }
    }
    cout<< cont;
}