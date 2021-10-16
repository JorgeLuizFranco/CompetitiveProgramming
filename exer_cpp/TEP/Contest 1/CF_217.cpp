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
#define maxn 2*(int)1e3
#define inf 0x3f3f3f3f
using namespace std;

int n,visited[maxn],ans;
pii nodes[maxn];

void dfs(int x){
    //cout<<x<<endl;
    visited[x]=1;
    auto[i,j]=nodes[x];
    for(int u=1; u<=n; u++){
        if((i==nodes[u].fs or j==nodes[u].sc) and !visited[u]){
            dfs(u);
        }
    }
}

int main(){
    cin>>n;
    for(int i=1; i<=n; i++){
        int a,b;
        cin>>a>>b;
        nodes[i]=pii(a,b);
    }
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            dfs(i);
            ++ans;
        }
    }
    cout<<ans-1;
	return 0;
}