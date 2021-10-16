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

int n,m,check[40][40];
//ll memo[40];

ll dp(int x, vector<int> v){
    //cout<<"Cheguei no: "<< x<<'\n';
    if(x==0){ 
        return 1;
    }
    //if(~memo[x]) return memo[x];
    //cout<<"\nConjunto\n";
    for(int u: v){
        //cout<<u<<' ';
        if(check[x][u]) return /*memo[x]=*/dp(x-1,v);
    }
    //cout<<endl;
    vector<int> v2=v;
    v2.pb(x);
    ll ans=dp(x-1,v2);
    ans+=dp(x-1,v);
    return /*memo[x]=*/ ans ;
}

int main(){_
    //memset(memo,-1,sizeof(memo));
	cin>>n>>m;
    while(m--){
        int x,y; 
        cin>>x>>y;
        check[x][y]=1;
        check[y][x]=1;
    }
    cout<< dp(n,vector<int>())-1;
	return 0;
}