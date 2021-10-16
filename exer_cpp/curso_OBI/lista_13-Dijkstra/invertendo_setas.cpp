#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define pf push_front
#define fs first
#define sc second
#define str(x) to_string(x)
#define pii pair<int,int>
#define maxn 2*(int)1e5
#define inf 0x3f3f3f3f
using namespace std;

int n,m,dist[maxn+1],a,b;
vector<pii> g[maxn+1];

void bfs(int ini){
    deque<pii> q;
    q.pb({0,ini});
    while (!q.empty())
    {
        int v,d;
        tie(d,v)=q.front(); q.pop_front();
        for(pii node: g[v]){
            int u,w;
            tie(w,u)=node;
            if(dist[u]>d+w){
                dist[u]=d+w;
                if(w){
                    q.pb({dist[u],u});
                }
                else{
                    q.pf({dist[u],u});
                }
            }
        }
    }
}

void initialize(){
    for(int i=0; i<=n+1; i++){
        dist[i]=inf;
        g[i].clear();
    }
}

int main(){_
    while(cin>>n>>m>>a>>b){
        initialize();
        while(m--){
            int x,y;
            cin>> x>>y;
            g[x].pb({0,y});
            g[y].pb({1,x});
        }
        bfs(a);
        int dist1= dist[b];
        for(int i=0; i<=n+1; i++) dist[i]=inf;
        bfs(b);
        int dist2=dist[a];
        if((dist1==inf and dist2==inf) or dist1==dist2){
            cout<<"Bibibibika\n";
            continue;
        }
        if(dist1<dist2){
            cout<<"Bibi: "<<dist1<<'\n';
        }
        else{
            cout<<"Bibika: "<<dist2<<'\n';
        }
    }
    return 0;
}