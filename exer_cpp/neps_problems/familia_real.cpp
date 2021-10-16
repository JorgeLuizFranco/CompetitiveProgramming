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

int n,m,generation[maxn],party[maxn],d_max,h[maxn];
vector<int> g[maxn];

void dfs(int v, int d){
    generation[v]=d;
    h[d]++;
    d_max=max(d_max,d);
    for(int u: g[v]){
        dfs(u,d+1);
    }
}

int main(){
	cin>>n>>m;
    for(int i=1; i<=n; i++){
        int x; cin>>x;
        g[x].pb(i);
    }
    dfs(0,0);
    while(m--){
        int x; cin>>x;
        party[generation[x]]++;
    }
    for(int i=1; i<=d_max; i++){
        double ans= 100.00*party[i]/(double)h[i];
        printf("%.2lf ",ans);
    }
	return 0;
}