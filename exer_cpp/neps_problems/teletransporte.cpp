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
#define maxn 2*(int)1e6
#define inf 0x3f3f3f3f
using namespace std;

vector<int> g[maxn];
int n,k,m,visited[maxn];

int bfs(int ini, int fim){
	queue<pii> q;
	q.push({ini,0});
	while(!q.empty()){
		auto[v,cont]= q.front(); q.pop();
		//cout<< v<<' ';
		for(auto u: g[v]){
			if(u==fim) return cont+2;
			if(!visited[u]){
				visited[u]=1;
				if(u<=n)q.push({u,cont+1});
				else q.push({u,cont});
			}
		}
	}
	return -1;
}

int main(){_
	cin>>n>>k>>m;
	for(int p=n+1; p<n+1+m; p++){
		//cout<< "Portal: "<<p-n<<endl;;
		for(int i=1; i<=k; i++){
			int x;
			cin>>x;
			//cout<<x<<' ';
			g[p].pb(x);
			g[x].pb(p);
		}
		//cout<<endl;
	}
	cout<< bfs(1,n)<<'\n';
	return 0;
}