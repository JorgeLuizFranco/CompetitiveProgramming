#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,j=0,cont=0; cin>>n;
    int V[n],O[n],r[n];
    for(int i=0;i<n;i++){
        cin>> V[i];
        O[i]=V[i];
    }
    sort(O,O+n);
    for(int i=0;i<n;i++){
        if(V[i]!=O[i]){
            cont++;
            r[j]=O[i];
            j++;
        }
    }
    cout<<cont<<endl;
    for(j=0; j<cont;j++){
        cout<< r[j] <<' ';
    }
    return 0;
}