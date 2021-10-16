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
#define maxn 2*(int)1e5
#define inf 0x3f3f3f3f
using namespace std;

int s,c,h[maxn],dist[maxn],mn=inf;
vector<pii> g[maxn];

void dijkstra(int ini){
    pq<pii,vector<pii>,greater<pii>> q;
    q.push(pii(h[ini],ini));
    while(!q.empty()){
        auto[d,v]= q.top(); q.pop();
        //cout<< v<<' '<<d<<endl;
        if(d>dist[v]) continue;
        for(auto[u,w]: g[v]){
            if(d+w<dist[u]){
                dist[u]=d+w;
                q.push({dist[u],u});
            }
        }
    }
}

int main(){_
	cin>>s>>c;
    for(int i=1; i<=s; i++){
        cin>> h[i];
    }
    for(int i=1; i<=c; i++){
        int a,b,t;
        cin>>a>>b>>t;
        g[a].pb({b,h[a]+t});
    }
    for(int i=1; i<=s; i++){
        memset(dist,inf,sizeof(dist));
        dijkstra(i);
        mn=min(dist[i]-h[i],mn);
    }
    cout<<mn;
	return 0;
}