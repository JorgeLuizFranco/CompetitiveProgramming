#include<bits/stdc++.h>
#define pb push_back
#define fs first
#define sc second
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,m,visitado[21002],cont,ini;
vector<int> v[21002];
vector<int> nodes;
set<int> grau1;

void dfs(int no){
    cont++;
    for(int u: v[no]){
        if(!visitado[u] and v[u].size()<=2){
            visitado[u]++;
            dfs(u);
        }
    }
}


int main(){_
    cin>>n >>m;
    while(m--){
        int x,y; cin>>x>>y;
        v[x].pb(y); v[y].pb(x);
        if(v[x].size()>=5 and !ini) ini=x;
        if(v[y].size()>=5 and !ini) ini=y;
        if(!grau1.count(x)){
            if(v[x].size()==1) grau1.insert(x);
        }
        else if(v[x].size()>1) grau1.erase(x);
        if(!grau1.count(y)){
            if(v[y].size()==1) grau1.insert(y);
        }
        else if(v[y].size()>1) grau1.erase(y); 
    }
    grau1.insert(ini);
    for(int u: grau1){
        visitado[u]++;
        dfs(u);
    }
    cout<< n-cont << '\n';
    return 0;
}