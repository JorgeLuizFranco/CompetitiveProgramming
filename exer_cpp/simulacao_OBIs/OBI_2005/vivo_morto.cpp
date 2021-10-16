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

int p,r,v[maxn],t;

int main(){_
	while(cin>>p>>r and p+r){
        vector<int> ids;
        for(int i=1; i<=p; i++){
            int x; cin>>x;
            v[i]=x;
            ids.pb(x);
        }
        while(r--){
            int n,j; cin>>n>>j;
            // for(int u: ids){
            //     cout<<u<<'\n';
            // }
            //cout<<endl;
            for(int i=1; i<=n; i++){
                while(!ids[i-1]){++i; ++n; }
                int a; cin>>a;
                if(a!=j){
                    ids[i-1]=0;
                }
            }
        }
        cout<<"Teste "<<++t<<'\n';
        for(int u: ids){
            if(u){
                cout<< u<<"\n\n";
                break;
            }
        }
    }
	return 0;
}