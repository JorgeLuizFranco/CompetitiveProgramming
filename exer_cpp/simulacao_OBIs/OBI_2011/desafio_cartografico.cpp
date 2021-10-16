// Diametro de uma árvore
#include <bits/stdc++.h>
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
#define maxn 2*(int)1e6
#define inf 0x3f3f3f3f
using namespace std;

int n,dist[maxn],highest,no;
vector<int> g[maxn];

void dfs(int v, int dad){
    //cout<< v<< ' ';
    for(int u: g[v]){
        if(u!=dad){
            dist[u]=dist[v]+1;
            if(dist[u]>highest){
                highest=dist[u],no=u;
            }
            //cout<< dist[u]<< '\n';
            dfs(u,v);
        }
    }
}

int main(){_
    cin>>n;
    for(int i=1; i<n; i++){
        int x,y;
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }
    dfs(1,-1);
    //cout<<"no: "<<no<<'\n';
    highest=0;
    memset(dist,0,sizeof(dist));
    dfs(no,-1);
    cout<<highest<<'\n';
	return 0;
}