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

int n,m,dist[maxn+1],a,b,t,r;
vector<pii> ga[maxn+1],go[maxn+1];
bitset<maxn> processed;

void dijkstra(vector<pii> g[maxn]){
    dist[1]=0;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0,1});
    while (!q.empty())
    {
        int v,d;
        tie(d,v)=q.top(); q.pop();
       // cout<< v<<endl;
        if(processed[v]) continue;
        processed[v]=true;
        for(pii node: g[v]){
            int w,u; tie(w,u)=node;
            if(dist[u]>d+w){
                dist[u]=d+w;
                q.push({dist[u],u});
            }
        }        
    }
}

void clean(vector<pii> g[maxn]){
    processed.reset();
    for(int i=0; i<=maxn; i++){
        g[i].clear();
        dist[i]=inf;
    }
}

int main(){_
    clean(go);
    while(cin>>n>>m){
        while(m--){
            cin>>a>>b>>t>>r;
            if(t){
                ga[a].pb({r,b});
            }
            else{
                go[a].pb({r,b});
            }
        }
        dijkstra(ga);
        int dist1=dist[n];
        clean(ga);
        dijkstra(go);
        //cout <<"INF = "<<inf;
        //cout <<"dist = "<< dist1 << "  dist n = "<<dist[n]<<endl;
        cout<< min(dist[n],dist1)<<'\n';
        clean(go);
    }
    return 0;
}