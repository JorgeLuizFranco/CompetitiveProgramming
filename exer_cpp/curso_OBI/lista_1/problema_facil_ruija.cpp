#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back

using namespace std;

int n,k,i,m,x,v;
vector<vector<int>> v;

int main(){_
	while (cin>>n>>m){
		vector<vector<int>> oc(100001);
		for (i=1;i<=n;i++){
			cin>>x;
			oc[x].pb(i);
		}
		while (m--){
			cin>>k>>v;
			cout<<(k>oc[v].size() ? 0 : oc[v][k-1])<<endl;
		}
	}
	return 0;
}