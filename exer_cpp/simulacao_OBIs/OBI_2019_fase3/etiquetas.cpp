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
#define maxn ((int)1e4+10)
#define inf 0x3f3f3f3f
using namespace std;

int n,k,c,memo[maxn][maxn],v[maxn],psa[maxn]; 
// Memo[x][e] : [tendo os inteiros de 1 a n disponíveis][usando as fitas de 1 a k] = soma máxima de inteiros

int dp(int x, int e){
    if(x<1 and e==0) return 0;
    if(e>0 and x<1) return -inf;
    if(~memo[x][e]) return memo[x][e];
    if(x-e*c<=0) return memo[x][e]=0;
    int ans=v[x]+dp(x-1,e);
    if(e>=1 and x-c>0){
        ans=max(dp(x-c,e-1),ans);
    }
    return memo[x][e]=ans;
}
//[*,1,2,3,4,5,6,7]
int main(){_
    memset(memo,-1,sizeof(memo));
	cin>>n>>k>>c;
    for(int i=1; i<=n; i++){
        cin>>v[i];
        psa[i]=psa[i-1]+v[i];
    }
    cout<<dp(n,k);
	return 0;
}