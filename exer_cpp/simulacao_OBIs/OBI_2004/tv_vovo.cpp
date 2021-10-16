#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define sc second
#define str(x) to_string(x)
#define pii pair<int,int>
#define maxn 2*(int)1e5+10
#define inf 0x3f3f3f3f
using namespace std;

int n,m,x,y,visited[maxn];
queue<pair<int,vector<int>>> q;
vector<int> g[maxn];

vector<int> bfs(int ini, int fim){
    q.push({ini,{ini}});
    while (!q.empty())
    {
        auto no=q.front();
        if(no.fs==fim) return no.sc;
        for(int u: g[no.fs]){
            if(!visited[u]){
                visited[u]++;
                no.sc.pb(u);
                q.push({u,no.sc});
            }
        }
    }
    return vector<int>();
}

int main(){
    cin>>n>>m;
    while (m--)
    {
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }
    auto v=bfs(1,n);
    if(v.empty()) cout<< "IMPOSSIBLE\n";
    else{
        cout<< v.size()<<'\n';
        for(int u: v){
            cout<< u << ' ';
        }
    }
    return 0;
}