#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back

using namespace std;

int n,m,v[10004],t;
vector<int> medias;

int maior(){
    int maiorao=medias[0];
    for(int u: medias){
        if(maiorao<u){
            maiorao=u;
        }
    }
    return maiorao;
}

int menor(){
    int menorao=medias[0];
    for(int u: medias){
        if(menorao>u){
            menorao=u;
        }
    }
    return menorao;
}

int main(){
    while (cin>>n>>m and n+m)
    {
        for(int i=1; i<=n; i++){
            cin>>v[i];
            //cout<< v[i];
        }
        for(int i=1; i<=n and (n-i+1)>=m; i++){
            int s=0;
            for(int j=i; j<=m+i-1; j++){
                //cout<< v[j]<< ' ';
                s+= v[j];
            }
            //cout<< endl;
            medias.pb((s/m));
        }
        cout<< "Teste "<<++t<<'\n';
        cout<< menor()<< ' '<<maior()<<'\n'<<'\n';
        medias.clear();
    }
    return 0;
}