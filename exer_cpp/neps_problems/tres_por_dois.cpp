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

vector<int> v;

int main(){_
	int n,ans=0; cin>>n;
    int t=n;
    while(t--){
        int x; cin>>x;
        //cout<<x<<endl;
        v.pb(x);
    }
    sort(all(v),greater<int>());
    //for(int u: v){cout<<u<<' ';}cout<<endl;
    int k= (n/3)+(n%3);
    for(int i=0; i<n and k>0; i++,k--){
        //cout<<v[i]<<' ';
        ans+= v[i]; ++i;
        if(!(i<n)) break;
        //cout<<v[i]<<' ';
        ans+=v[i]; ++i;
    }
    cout<<ans<<'\n';
	return 0;
}