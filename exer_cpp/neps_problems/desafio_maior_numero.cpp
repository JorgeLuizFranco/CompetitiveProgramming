#include <bits/stdc++.h>

using namespace std;

int n,maior;

int main(){
    while(cin>>n and n){
        if(n>maior){
            maior=n;
        }
    }
    cout<< maior;
    return 0;
}