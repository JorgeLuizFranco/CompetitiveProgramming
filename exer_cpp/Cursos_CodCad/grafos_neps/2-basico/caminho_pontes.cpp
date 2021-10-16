#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define zero 2
#define pb push_back
#define fs first
#define sc second
#define pii pair<int,int>
#define inf 10000

using namespace std;

int n,m,dist[1010];

bitset<1010> processed;

vector<pii> g[1010];

void clean(){
    processed.reset();
    for(int i=0; i<=n+2; i++){
        dist[i]=inf;
    }
}
void dijkstra(int ini){
    clean();
    dist[ini]=0;
    priority_queue<pii,vector<pii>,greater<pii>> q;
    q.push({dist[ini],ini});
    while(!q.empty()){
        int v,d;
        //cout<<dist[v]<<endl;
        tie(d,v)=q.top();q.pop();
        if(processed[v]) continue;
        processed[v]=true;
        for(auto node: g[v]){
            int w,u;
            tie(w,u)=node;
            if(dist[u]>d+w){
                dist[u]=d+w;
                q.push({dist[u],u});
            }
        }
    }
}

int main(){
    cin>>n>>m;
    while(m--){
        int x,y,w;
        cin>>x>>y>>w;
        g[x].pb({w,y});
        g[y].pb({w,x});
    }
    dijkstra(0);
    cout<< dist[n+1];
    return 0;
}