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
#define maxn (2*(int)1e5+1)
#define inf 0x3f3f3f3f
using namespace std;

int n,v[maxn],ans;

int main(){_
	cin>>n;
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }
    for(int i=1+n; i<=n+n; i++){
        v[i]=v[i-n];
    }
    for(int i=1; i<=n+n; i++){
        psa[i]=psa[i-1]+v[i];
    }
    // for(int i=1; i<=n and v[i]>=0; i++){
    //     ans+=v[i];
    // }
    // if(i==n){
    //     cout<<ans; return 0;
    // }
    // for(int i=1+n; i<=n+n; i++){
    //     v[i]=v[i-n];
    // }
    
	return 0;
}