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
#define mod ((int)1e9+7)
#define str(x) to_string(x)
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define iii tuple<int,int,int>
#define pii pair<int,int>
#define maxn 2*(int)1e6
#define inf 0x3f3f3f3f
using namespace std;

int n;
ll memo[maxn];

ll dp(int w){
	//cout<<' '<<w<<'\n';
	if(w==0) {/*cout<<"boa\n";*/return 1;}
	if(w<0) return 0;
	if(memo[w]!=-1) return memo[w];
	ll ans=0;
	for(int i=1; i<=6; i++){
		ans+=(dp(w-i)%mod);
	}
	//if(w%x==0) ++ans;
	return memo[w]=(ans%mod);
}

int main(){_
	cin>>n;
	memset(memo,-1,sizeof(memo));
	cout<<dp(n);
	return 0;
}