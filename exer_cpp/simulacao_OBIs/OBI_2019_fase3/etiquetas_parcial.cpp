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

int n,k,c;

bool is_sorted(vector<int> v){
	for(int i=0; i<sz(v)-1; i++){
		if(!(v[i]<=v[i+1])){
			return false;
		}
	}
	return true;
}

int main(){_
	cin>>n>>k>>c;
	if(c==1){
		vector<int> v;
		for(int i=1; i<=n; i++){
			int x; cin>>x;
			v.pb(x);
		}
		sort(all(v));
		reverse(all(v));
		int ans=0;
		for(int i=0; i<n-k; i++){
			ans+=v[i];
		}
		cout<<ans<<'\n';
	}
	else if(k==1){
		vector<int> v,psa(n+1,0);
		for(int i=1; i<=n; i++){
			int x; cin>>x;
			//v.pb(x);
			psa[i]=psa[i-1]+x;
			//cout<<psa[i]<<'\n';
		}
		int sum_max=-inf;
		//[1,2,3,4]=10
		//[3,4,7,9,11,2,4]   k=2 c=2
		for(int i=1; i<=n and i+c-1<=n; i++){
			sum_max=max(sum_max,psa[n]-(psa[i+c-1]-psa[i-1]));
		}
		cout<<sum_max<<'\n';
	}
	else{
		vector<int> v;
		for(int i=1; i<=n; i++){
			int x; cin>>x;
			v.pb(x);
		}
		int ans=0;
		if(is_sorted(v)){
			for(int i=k*c; i<sz(v); i++){
				ans+=v[i];
			}
			cout<<ans<<'\n';
		}
	}
	return 0;
}