#include<bits/stdc++.h>
#define pb push_back
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,m,it,visitado[1002],cont;
vector<int> v[1002];
map<string,int> d;

void dfs(int no){
    for(int u: v[no]){
        if(!visitado[u]){
            visitado[u]++;
            dfs(u);
        }
    }
}

int main(){_
    cin>>n >>m;
    while (m--)
    {
        string a,lixo,b;
        cin>> a >>lixo >>b;
        if(!d.count(a)){
            d[a]=++it;
        }
        if(!d.count(b)){
            d[b]=++it;
        }
        v[d[a]].pb(d[b]);
        v[d[b]].pb(d[a]);
    }
    for(int i=1; i<=n; i++){
        if(!visitado[i]){
            dfs(i);
            ++cont;
        }
    }
    cout<< cont << '\n';
}