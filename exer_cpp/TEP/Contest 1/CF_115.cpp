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

int n,cont,visited[maxn],m;

vector<int> g[maxn];

void dfs(int x, int h){
    //cout<<x<<' '<<h<<endl;
    m=max(h,m);
    for(auto u: g[x]){
        dfs(u,h+1);
    }
}

int main(){
	cin>>n;
    for(int i=1; i<=n; i++){
        int x; cin>>x;
        if(x!=-1) g[x].pb(i);
        else g[0].pb(i);
    }
    for(int i: g[0]){
        dfs(i,1);
    }
    cout<<m<<endl;
	return 0;
}