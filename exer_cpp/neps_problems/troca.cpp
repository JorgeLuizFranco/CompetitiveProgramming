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

int psa[maxn],v[2][maxn],mark[maxn],n,t;

int main(){_
    cin>>n>>t;
    for(int k=0; k<2; k++){
        for(int i=1; i<=n; i++){
            cin>>v[k][i];            
        }
    }
    for(int i=0; i<t; i++){
        int x,y; cin>>x>>y;
        mark[x]++; mark[y+1]--;
    }
    for(int i=1; i<=n; i++){
        psa[i]=psa[i-1]+mark[i];
    }
    for(int i=1; i<=n; i++){
        cout<< v[psa[i]&1][i]<<' ';
    }
	return 0;
}