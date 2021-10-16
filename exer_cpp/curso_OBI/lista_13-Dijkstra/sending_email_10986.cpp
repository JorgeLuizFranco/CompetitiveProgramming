#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define sc second
#define str(x) to_string(x)
#define pii pair<int,int>
#define maxn 2*(int)1e5
#define inf 0x3f3f3f3f
using namespace std;

int n,m,dist[maxn],w,u,d,v,x,y,t,s,e,k;
vector<pii> g[maxn];
bitset<maxn> processed;

void dijkstra(int ini){
    dist[ini]=0;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0,ini});
    while (!q.empty())
    {
        tie(d,v)=q.top(); q.pop();
        if(processed[v]) continue;
        processed[v]=true;
        for(pii no: g[v]){
            tie(w,u)=no;
            if(dist[u]>w+d){
                dist[u]=w+d;
                q.push({dist[u],u});
            }
        }
    }
}

void initi(){
    processed.reset();
    for(int i=0; i<n+2; i++){
        dist[i]=inf;
        g[i].clear();
    }
}

int main(){
    cin>>t;
    while(t--){
        cin>>n>>m>>s>>e;
        initi();
        while (m--)
        {
            cin>>x>>y>>w;
            g[x].pb({w,y});
            g[y].pb({w,x});
        }
        dijkstra(s);
        string ans= (dist[e]==inf? "unreachable": str(dist[e]));
        cout<<"Case #"<<++k<<": "<<ans<<'\n';
    }
    return 0;
}