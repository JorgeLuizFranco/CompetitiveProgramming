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
#define pii pair<int,int>
#define maxn 2*(int)1e5
#define inf 0x3f3f3f3f
using namespace std;

vector<pii> g;
int n,a,b,e,memo[maxn][maxn];

int dfs(int v, int ant, int cor){
	for(auto [w,u]: g[v]){
		if(w==cor or u==ant) continue;
		memo[v][ant]=max(memo[u][v],dfs())
	}
}

int main(){_
	cin>>n;
	while(--n){
		cin>>a>>b>>e;
		g[a].pb({e,b});
		g[b].pb({e,a});
	}
	dfs(1)
	return 0;
}