#include<bits/stdc++.h>
#define ln() cout<< '\n';
#define pb push_back
#define fs first
#define sc second
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,m,visitado[1002],cont,cor[1002];
vector<int> v[1002];

vector<int> bfs(int ini, int fim){
    queue<pair<int,vector<int>>> q;
    q.push({ini,{}});
    while(!q.empty()){
        auto no=q.front(); q.pop();
        no.sc.pb(no.fs);
        for(int u: v[no.fs]){
            if(u==fim){
                return no.sc;
            }
            else if(!visitado[u]){
                visitado[u]++;                
                q.push({u,no.sc});
            }
        }
    }
    return vector<int>();
}



int main(){_
    cin>>n >>m;
    for(int i=1; i<n; i++){
        int x,y; cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
    while(m--){
        int a,b,c; cin>>a>>b>>c; cor[b]=c;
        if(a!=b){
            auto nodes= bfs(a,b);
            for(int u: nodes){
                //cout<< u << ' ';
                cor[u]=c;
            }
            for(int i=1; i<=n; i++){
                visitado[i]=0;
            }
        }
    }
    for(int i=1; i<=n; i++){
        cout<< cor[i]<< ' ';
    }
    ln();
    return 0;
}