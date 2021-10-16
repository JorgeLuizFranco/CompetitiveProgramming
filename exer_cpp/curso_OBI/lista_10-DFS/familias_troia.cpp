#include <bits/stdc++.h>
#define pb push_back
using namespace std;

vector<int> v[50002];
int componente[50002],n,m,x,y,cont;

void dfs(int no){
    for(int i: v[no]){
        if(!componente[i]){
            componente[i]++;
            dfs(i);
        }
    }
}

int main(){
    cin>> n >>m;
    for(int i=0; i<m; i++){
        cin>> x>> y;
        v[x].pb(y);
        v[y].pb(x);
    }
    for(int i=1; i<=n; i++){
        if(!componente[i]){
            dfs(i);
            cont++;
        }
    }
    cout<< cont<< '\n';
    return 0;
}