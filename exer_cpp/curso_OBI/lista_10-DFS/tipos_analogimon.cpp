#include <bits/stdc++.h>
#define pb push_back
using namespace std;

vector<int> v[1002];
int n,m,x,y,cont,componente[1002];

void dfs(int no){
    cont++;
    componente[no]++;
    for(int i: v[no]){
        if(!componente[i]){
            dfs(i);
        }
    }
}

int main(){
    while(cin>>n >>m){
        cont=0;
        for(int i=1; i<=m ;i++){
            cin>> x >>y;
            v[x].pb(y);
            v[y].pb(x);
        }
        cin>>x;
        dfs(x);
        cout<< cont << '\n';
        for(int i=1; i<=n; i++){
            v[i].clear();
            componente[i]=0;
        }
    }
    return 0;
}