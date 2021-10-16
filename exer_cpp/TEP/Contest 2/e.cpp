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
#define maxn (2*(int)1e5+10)
#define inf 0x3f3f3f3f
using namespace std;

int memo[maxn+100],mx,t,n,a[maxn];

int dp(int x){
    //cout<<x<<" ->";    //7 3 1 2 3
    if(x>n) return 0;
    if(memo[x]) { /*cout<<"memo: "<<memo[x]<<" __";*/return memo[x];}
    return memo[x]=dp(x+a[x])+a[x];
}

int main(){_
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
        mx=0;
        for(int i=1; i<=n; i++){
            //cout<<i<<": \n";
            int ans=dp(i);
            //cout<<endl<<ans;
            mx=max(mx,ans);
            //cout<<endl;
        }
        cout<<mx<<'\n'; 
        memset(memo,0,sizeof(memo));
        memset(memo,0,sizeof(a));
    }
	return 0;
}