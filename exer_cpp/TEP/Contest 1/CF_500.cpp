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

int n,t;
vector<int> g[maxn];

int bfs(int begx, int endx){
    queue<int> q({begx});
    while(!q.empty()){
        int no=q.front(); q.pop();
        for(auto u: g[no]){
            if(u==endx) return 1;
            q.push(u);
        }
    }
    return 0;
}

int main(){_
    cin>>n>>t;
    for(int i=1; i<n; i++){
        int a;
        cin>>a;
        g[i].pb(a+i);
    }
    cout<<(bfs(1,t)?"YES":"NO");
	return 0;
}