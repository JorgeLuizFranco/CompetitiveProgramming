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

int visited[maxn],color[maxn],ans,c[maxn];
vector<int> g[maxn];
int dfs(int v){
    c[color[v]]++;
    for(int u: g[v]){
        if(!visited[u]){
            visited[u]=1;
            color[u]=!color[v];
            if(!dfs(u)) return 0;
        }
        else if(color[u]==color[v]) return 0;
    }
    return 1;
}

int main(){_
	int n,m; cin>>n>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            visited[i]=1;
            if(!dfs(i)){
                cout<< -1; return 0;
            }
            int a1=c[1],a0=c[0];
            c[0]=0,c[1]=0;
            ans+=max(a1,a0);
        }
    }
    cout<<ans;
	return 0;
}