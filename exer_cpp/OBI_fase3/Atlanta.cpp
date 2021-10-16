#include <bits/stdc++.h>

using namespace std;

const int n= (int)1e6;
int a,b;

int check(int l, int c){
	return ((l-2)*(c-2)>=b and 2*l+2*c-4>=a);
}

int main(){
	cin>>a>>b;
	for(int i=1; i<=n; i++){
		int ini=1,fim=n,meio;
		while(ini<fim){
			meio=ini+((fim-ini)>>1);
			if(check(i,meio)) fim=meio;
			else ini=meio+1;
		}
		if(((ini-2)*(i-2)==b and 2*i+2*ini-4==a)){
			cout<< min(ini,i)<<' '<<max(ini,i);
			return 0;
		}
	}
	cout<< -1<<' '<<-1;
	return 0;
}
