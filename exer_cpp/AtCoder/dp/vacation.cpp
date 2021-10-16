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

int n,a[maxn],b[maxn],c[maxn];
ll memo[maxn][4];

ll dp(int x,int k){
    //cout<<x<<' '<<k<<endl;
    if(x>n) return 0;
    if(~memo[x][k]) return memo[x][k];
    ll ans;
    if(k==1) 
        ans= max(dp(x+1,2)+b[x],dp(x+1,3)+c[x]);
    else if(k==2)
        ans= max(dp(x+1,1)+a[x],dp(x+1,3)+c[x]);
    else  
        ans= max(dp(x+1,2)+b[x],dp(x+1,1)+a[x]);
    //cout<<"ans:"<<ans<<endl;
    return memo[x][k]=ans;
}

int main(){_
	cin>>n;
    memset(memo,-1,sizeof memo);
    for(int i=1; i<=n; i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    cout<< max({dp(1,1),dp(1,2),dp(1,3)});
	return 0;
}