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
#define inf (int)1e7
using namespace std;

int n,x;
ll memo[maxn],c[maxn];

ll dp(ll w){
    //cout<< w<<'\n';
    if(w==0) {/*cout<<"opa\n";*/return 1;}
    if(w<0) return inf;
    ll ans=inf;
    if(~memo[w]) return memo[w];
    for(int i=1; i<=n; i++){
        ll k=dp(w-c[i]);
        ans=min(ans,k);
    }
    return memo[w]=ans+1;
}

int main(){_
	cin>>n>>x;
    for(int i=1; i<=n; i++){
        cin>>c[i];
        //cout<< c[i]<<' ';
    }
    //cout<<endl;
    memset(memo,-1,sizeof(memo));
    cout<< (dp(x)>=inf?-1: dp(x)-1)<<'\n';
	return 0;
}