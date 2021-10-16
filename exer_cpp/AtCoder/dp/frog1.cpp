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
#define inf (int)1e6+3
using namespace std;

int n,h[maxn];
ll memo[maxn];

ll dp(int x){
    //cout<<x<<' '<<w<<endl;
    if(x==n) return 0;
    if(x>n) return inf;
    if(~memo[x]) return memo[x];
    return memo[x]=min(dp(x+1)+abs(h[x]-h[x+1]),dp(x+2)+abs(h[x]-h[x+2]));
}

int main(){_
	cin>>n;
    for(int i=1; i<=n; i++){
        cin>>h[i];
    }
    memset(memo,-1,sizeof memo);
    cout<<dp(1);
	return 0;
}