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

int n,m,t;

int main(){_
	cin>>t;
    while(t--){
        int ans=-inf;
        cin>>n>>m;
        vector<int> v;
        int k=m,tam=2;
        v.pb(0);
        while(k--){
            int x; cin>>x;
            if(x<n){
                v.pb(x);
                ++tam;
            }
        }
        v.pb(n);
        sort(all(v));
        for(int i=1; i<tam; i++){
            //cout<< v[i-1]<<' '<<v[i]<<'\n';
            ans= max(v[i]-v[i-1],ans);
        }
        cout<<ans<<'\n';
    }
	return 0;
}