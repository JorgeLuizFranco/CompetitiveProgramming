#include <bits/stdc++.h>

using namespace std;

int v[5*10002],v2[100002];

int main(){
	int n,m;
	cin>>n;
	for(int i=1; i<=n; i++){
		int x; cin>>x;
		v[i]=x; v2[x]=i;
	}
	cin>>m;
	while(m--){
		int x; cin>>x;
		v[v2[x]]=-1;
	}
	for(int i=1; i<=n; i++){
		if(v[i]!=-1){
			cout<< v[i] << ' ';
		}
	}
	return 0;
}