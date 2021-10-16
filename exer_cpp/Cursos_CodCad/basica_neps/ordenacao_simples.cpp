#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n;
    int V[n];
    for(int i=0;i<n;i++){
        cin>> V[i];
    }
    sort(V,V+n);
    for(int i=0;i<n;i++){
        cout<< V[i]<<' ';
    }
    return 0;
}