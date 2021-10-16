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
#define pii pair<int,int>
#define maxn 2*(int)1e5
#define inf 0x3f3f3f3f
using namespace std;

vector<int> v,ans;

int n,k;

int main(){
    cin>>n>>k;
    int na=n;
    while(na--){
        int x; cin>>x;
        v.pb(x);
    }
    sort(all(v));
    int d=inf;
    for(int i=n-k-1; i<n; i++){
        d=min(d,v[i]-v[i-n+k+1]);
    }
    cout<< d<<'\n';
    return 0;
}