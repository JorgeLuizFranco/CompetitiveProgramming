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

int n,m,visited[maxn];
ll ans,x;
vector<int> g[maxn];

void dfs(int no){
    assert(!visited[no]);
    visited[no]=1;
    ++x;
    //cout<<"no: "<<no<<'\n';
    for(int u: g[no]){
        ++ans;
        if(!visited[u]){
            dfs(u);
        }
    }
}

int main(){_
    cin>>n>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }
    for(int i=1; i<=n; i++){
        //cout<<i<<' ';
        if(visited[i]) continue;
        x=ans=0;
        //cout<<" size: "<<x<<'\n';
        dfs(i);
        //cout<<ans<<'\n';
        if(ans!=x*(x-1)){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
	return 0;
}