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

int n,m,s,indegree[maxn],e[maxn/10],f[maxn/10];
vector<int> g[maxn/10];

int kahn(){
    int ans=0;
    pq<pii,vector<pii>,greater<pii>> q;
    for(int i=1; i<=n; i++){
        if(indegree[i]==0){
            q.push(pii(e[i],i));
        }
    }
    while(!q.empty()){
        auto [w,v]=q.top(); q.pop();
        if(s<=w) return 0;
        ++ans;
        s+=f[v];
        for(auto u: g[v]){
            indegree[u]--;
            if(indegree[u]==0){
                q.push(pii(e[u],u));
            }
        }
    }
    return ans;
}

int main(){_
	while(cin>>n>>m>>s and n+m+s){
        for(int i=1; i<=n; i++){
            cin>>e[i];
        }
        for(int i=1; i<=n; i++){
            cin>>f[i];
        }
        while(m--){
            int a,b; cin>>a>>b;
            g[a].pb(b);
            indegree[b]++;
        }
        cout<< (kahn()==n? "possivel\n": "impossivel\n");
        for(int i=1; i<=n; i++){
            g[i].clear();
            indegree[i]=0;
        }
    }
	return 0;
}