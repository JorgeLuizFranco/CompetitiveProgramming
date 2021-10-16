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
#define maxn 2*(int)1e3
#define inf 0x3f3f3f3f
using namespace std;

int c,f,n,d,memo[60][maxn],w[60],v[60],t;

int dp(int i, int wt){
    if(i<=0 or wt<=0) return 0;
    if(~memo[i][wt]) return memo[i][wt];
    if(wt-w[i]<0) return memo[i][wt]=dp(i-1,wt);
    return memo[i][wt]= max(v[i]+dp(i-1,wt-w[i]),dp(i-1,wt));
}

int main(){_
	while(cin>>c>>f and c+f){
        memset(memo,-1,sizeof(memo));
        for(int i=1; i<=f; i++){
            cin>>w[i]>>v[i];
        }
        dp(f,c);
        cout<<"Teste "<<++t<<'\n';
        cout<< memo[f][c]<<"\n\n";
    }
	return 0;
}