#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n){
        int V[2*n],S[n];
        for(int i=0; i<2*n; i++){
            cin>> V[i];
        }
        for(int i=0; i<n; i++){
            S[i]= V[i]+V[2*n-1-i];
        }        
        sort(S,S+n);
        cout<< S[n-1] << ' ' << S[0] << '\n';
        cin>>n;
    }
    return 0;
}