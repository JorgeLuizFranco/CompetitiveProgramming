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

vector<int> g[maxn],ans;
pq<int, vector<int>, greater<int>> q;
int n,m,indegree[maxn];

int main(){_
    cin>>n>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        //cout<<x<<' '<<y;
        g[x].pb(y);
        indegree[y]++;
    }
    for(int i=0; i<n; i++){
        if(!indegree[i]){
            //cout<<i<<'\n';
            q.push(i);
        }
    }
    while(!q.empty()){
        int no=q.top(); q.pop();
        ans.pb(no);
        for(auto u: g[no]){
            indegree[u]--;
            if(!indegree[u]){
                q.push(u);
            }
        }
    }
    if(sz(ans)<n){
        cout<<'*';
        return 0;
    }
    for(int x: ans){
        cout<<x<<'\n';
    }
	return 0;
}