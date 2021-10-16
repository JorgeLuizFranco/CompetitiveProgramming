#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define zero 2
#define pb push_back
#define fs first
#define sc second
#define pii pair<int,int>
#define inf 10000

using namespace std;

int n,m,dist[1010],c,k;

bitset<1010> processed;

vector<pii> g[1010];

void clean(){
    processed.reset();
    for(int i=0; i<=n+2; i++){
        dist[i]=inf;
        g[i].clear();
    }
}
void dijkstra(int ini){
    dist[ini]=0;
    priority_queue<pii,vector<pii>,greater<pii>> q;
    q.push({dist[ini],ini});
    while(!q.empty()){
        int v,d;
        tie(d,v)=q.top();q.pop();
        //cout<<"vertice: "<<v<< " dist: "<<dist[v]<<endl;
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
    while(cin>>n>>m>>c>>k and n+m+c+k){
        clean();
        while(m--){
            int x,y,w;
            cin>>x>>y>>w;
            if((x>=c and y>=c) or (y<c and x<c and abs(x-y)==1)){
                g[x].pb({w,y});
                g[y].pb({w,x});
            }
            else if(x>=c) g[x].pb({w,y});
            else if(y>=c) g[y].pb({w,x});
        }
        dijkstra(k);
        cout<< dist[c-1]<< '\n';
    }
    return 0;
}