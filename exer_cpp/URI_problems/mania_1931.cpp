#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define sc second
#define str(x) to_string(x)
#define pii pair<int,int>
#define triple tuple<int,int,int>
#define maxn 2*(int)1e4
#define inf 0x3f3f3f3f
using namespace std;

int dist[maxn][2],n,m;
vector<pii> g[maxn];

void dijkstra(){
    priority_queue<triple,vector<triple>, greater<triple>> q;
    q.push({0,1,0});
    dist[1][0]=0,dist[1][1]=0;
    while (!q.empty())
    {
        int d,v,idx,cont;
        tie(d,v,cont)=q.top();q.pop();
        idx=cont%2;
        if(d>dist[v][idx]) continue;
        for(pii node: g[v]){
            int w,u;
            tie(w,u)=node;
            if(dist[u][1-idx]>d+w){
                dist[u][1-idx]=d+w;
                q.push({d+w,u,cont+1});
            }
        }
    }
}

int main(){_
    cin>>n>>m;
    while (m--)
    {
        int x,y,w;
        cin>>x>>y>>w;
        g[x].pb({w,y});
        g[y].pb({w,x});
    }
    for(int i=0; i<=n+1; i++){
        dist[i][0]=inf; dist[i][1]=inf;
    }
    dijkstra();
    cout<< (dist[n][0]==inf? -1: dist[n][0])<<'\n';
    return 0;
}