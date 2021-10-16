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
#define maxn (int)1e5
#define mod ((int)1e9+7)
#define inf 0x3f3f3f3f
using namespace std;

int n;
ll x,c[maxn],memo[100][maxn];

ll dp(int i, int w){
    if(w<0 or i<=0) return 0;
    if(w==0){/*cout<<"opa\n";*/ return 1;} 
    //cout<<w<<endl;
    if(~memo[i][w]) return memo[i][w];
    return memo[i][w]=((dp(i,w-c[i])%mod)+(dp(i-1,w)%mod))%mod;
}

int main(){_
	cin>>n>>x;
    for(int i=1; i<=n; i++){
        cin>>c[i];
    }
    memset(memo,-1,sizeof memo);
    cout<< dp(n,x);
	return 0;
}