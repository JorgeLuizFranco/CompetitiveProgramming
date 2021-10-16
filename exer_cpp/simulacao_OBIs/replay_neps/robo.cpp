#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define pq priority_queue
#define sc second
#define ub upper_bound
#define print(x) for(int wx=0; wx<sz(x); wx++) cout<< x[wx]<< ' ';
#define lb lower_bound
#define ll long long
#define str(x) to_string(x)
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define lii tuple<ll,int,int>
#define pii pair<int,int>
#define pli pair<ll,int>
#define maxn (2*(int)1e5+10)
#define inf 0x3f3f3f3f
using namespace std;

int n,m;
ll dist[maxn];
unordered_map<int,unordered_map<int,ll>> weight,color[maxn],c;
vector<int> g[maxn];

void dijkstra(int begx){
    dist[begx]=0LL;
    pq<pli,vector<pli>,greater<pli>> q; q.push({0LL,begx});
    while(!q.empty()){
        auto[d,v]=q.top(); q.pop();
        cout<<d<<' '<<v<<endl;
        if(dist[v]<d) continue;
        //cout<<"ou\n";
        for(int u: g[v]){
            ll w1=weight[v][c[v][u]]-color[v][u][c[v][u]];
            ll w2=color[v][u][c[v][u]];
            cout<<"u: "<<u<<' '<<c<<endl;
            cout<<"w1: "<<w1<<" w2: "<<w2<<endl<<endl;
            if(w1>w2){
                w=w2;
                c[v][u]=0;
            }
            else{
                w=w1;
                
            }
            if(dist[u]>d+w){
                dist[u]=d+w;
                q.push({dist[u],u});
            }
        }
    }
}

int main(){_
	cin>>n>>m;
    while(m--){
        int a,b,p;
        cin>>a>>b>>c[a][b]>>p;
        c[b][a]=c[a][b];
        g[a].pb(b);
        weight[a][c[a][b]]+=p;
        weight[b][c[a][b]]+=p;
        color[a][b][c[a][b]]=p;
    }
    memset(dist,inf,sizeof(dist));
    dijkstra(1);
    cout<< (dist[n]==inf? -1: dist[n])<<'\n';
	return 0;
}