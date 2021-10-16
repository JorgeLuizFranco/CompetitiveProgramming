#include <bits/stdc++.h>

using namespace std;

int v[1001][1001],t[1001*1001],cont;
long long sh,sv,sd,ant,n;
int main(){
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>> v[i][j];
            t[v[i][j]]++;
        }
    }
    for(int i=1; i<=n; i++){
        if(t[i]){
            cont++;
        }
    }
    if(cont!= n){
        cout<<0;
        return 0;
    }
    //cout<< "\n Passou alo\n";
    for(int i=1; i<=n; i++){
        sh=0;
        for(int j=1; j<=n; j++){
            sh+= v[i][j];
            //cout<< sh << "Alo\n";
        }
        //cout<< sh << '\n';
        if(!(i-1)){
            ant=sh;
        }
        if(sh!=ant){
            cout<< 0;
            return 0;
        }
    }
    for(int i=1; i<=n; i++){
        sv=0;
        for(int j=1; j<=n; j++){
            sv+= v[j][i];
        }
        //cout<< sv << '\n';
        if(sv!=sh){
            cout<< 0;
            return 0;
        }
    }
    for(int i=1; i<=n; i++){
        //cout<< sd << '\n';
        sd+= v[i][i];
    }
    if(sd!=sh){
            cout<< 0;
            return 0;
        }
    cout<< sh;
    return 0;
}