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
#define iii tuple<int,int,int>
#define pii pair<int,int>
#define maxn (2*(int)1e3+1)
#define inf 0x3f3f3f3f
using namespace std;

int k,n,m,dist[maxn];
vector<iii> g[maxn];

void dijkstra(int beg){
    pq<iii,vector<iii>,greater<iii>> q;
    q.push(iii(dist[beg]=0,beg,k));
    while(!q.empty()){
        auto [d,v,hc]=q.top(); q.pop();
        //cout<<v<<'\n';
        if(d>dist[v]) continue;
        for(auto [u,w,h]: g[v]){
            if(d+w<dist[u] and (hc-h>0)){
                q.push(iii(dist[u]=d+w,u,hc-h));
            }
        }
    }
}

int main(){_
	cin>>k>>n>>m;
    while(m--){
        int a,b,t,h;
        cin>>a>>b>>t>>h;
        g[a].pb({b,t,h});
        g[b].pb({a,t,h});
    }
    int a,b; cin>>a>>b;
    memset(dist,inf,sizeof(dist));
    dijkstra(a);
    cout<<(dist[b]==inf? -1: dist[b]);
	return 0;
}