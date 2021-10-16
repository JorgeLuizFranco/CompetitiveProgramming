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

int v[102],w[102];
ll memo[102][maxn];
int n,W;

ll dp(int x, int k){
    //cout<<x<<' '<<k<<endl;
    if(x>n) return 0;
    if(~memo[x][k]) return memo[x][k];
    ll ans=dp(x+1,k);
    if(w[x]+k<=W){
        ans=max(ans,dp(x+1,k+w[x])+v[x]);
    }
    return memo[x][k]=ans;
}

int main(){_
    cin>>n>>W;
    memset(memo,-1,sizeof(memo));
    for(int i=1; i<=n; i++){
        cin>>w[i]>>v[i];
    }
    cout<< dp(1,0);
	return 0;
}