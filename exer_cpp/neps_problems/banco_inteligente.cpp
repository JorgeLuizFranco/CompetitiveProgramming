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

int k,n[6],v[7]={2, 5, 10, 20, 50,100,0},memo[7][5000];

int dp(int coin, int w){
    //cout<< coin<< ' '<<w<<'\n';
    if(w==0) return 1;
    if(w<0 or coin==6) return 0;
    if(~memo[coin][w]) return memo[coin][w];
    int ans= 0;
    ans+= dp(coin+1,w); // sem pegar
    for(int i=1; i<=n[coin]; i++){
        ans+= dp(coin+1,w-v[coin]*i); // pegando
    }
    return memo[coin][w]=ans;
}

int main(){_
    memset(memo, -1, sizeof(memo));
	cin>>k;
    for(int i=0; i<6; i++){
        cin>>n[i];
    }
    cout<< dp(0,k);
	return 0;
}