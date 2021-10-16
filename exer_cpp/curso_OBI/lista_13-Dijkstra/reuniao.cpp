#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define sc second
#define pii pair<int,int>
#define maxn 2*(int)1e4
#define inf 0x3f3f3f3f

using namespace std;

int n,m,dist[maxn],w,u,menor=inf,maior=-1;
vector<pii> g[maxn];
bitset<maxn> processed;

void dijkstra(int no){
    dist[no]=0;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0,no});
    while (!q.empty())
    {
        int v,d;
        tie(d,v)=q.top();q.pop();
        if(processed[v]) continue;
        processed[v]=true;
        //cout<< "v: "<<v<<" d: "<<d<<endl;
        maior=max(d,maior);
        //cout<< maior<<endl;
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
    }
}

int main(){
    cin>>n>>m;
    initi();
    while (m--)
    {
        int x,y,d;
        cin>>x>>y>>d;
        g[x].pb({d,y});
        g[y].pb({d,x});
    }
    for(int i=0; i<n; i++){
        //cout<< "\ni: "<<i<<'\n';
        dijkstra(i);
        menor= min(maior,menor);
        initi();
        maior=-1;
    }
    cout<< menor;
    return 0;
}