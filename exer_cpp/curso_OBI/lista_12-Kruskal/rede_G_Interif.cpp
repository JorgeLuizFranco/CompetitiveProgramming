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
#define iii tuple<int,int,int>
#define str(x) to_string(x)
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define maxn 2*(int)1e5
#define inf 0x3f3f3f3f
using namespace std;

int parent[maxn],n,m,ans,cont;
vector<iii> g;

int findx(int x){
    if(x==parent[x]) return x;
    return parent[x]=findx(parent[x]);
}

void join(int x, int y){
    parent[y]=x;
}

int main(){_
	cin>>n>>m;
    for(int i=1; i<=n; i++){
        parent[i]=i;
    }
    while(m--){
        int x,y,w;
        cin>>x>>y>>w;
        g.pb({w,x,y});
    }
    sort(all(g));
    for(auto [w,v,u]: g){
        if(findx(v)==findx(u)) continue;
        ++cont;
        join(findx(v),findx(u));
        ans+=w;
        if(cont==n-1) break;
    }
    cout<<ans<<'\n';
	return 0;
}