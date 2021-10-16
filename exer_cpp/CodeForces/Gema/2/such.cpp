#include <bits/stdc++.h>

using namespace std;

int n,x,menor=(int)1e9,maior=0;

int main(){
    cin>> n;
    while(n--){
        cin>>x;
        menor= min(x,menor);
        maior=max(x,maior);
    }
    cout<< maior-menor << '\n';
    return 0;
}