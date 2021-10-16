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
#define maxn 2*(int)1e4
#define inf 0x3f3f3f3f
using namespace std;

int t,n,m,q;
set<int> v[maxn];
int main(){_
	cin>>t;
    while(t--){
        cin>>n;
        cout<<n<<'\n';
        for(int i=1; i<=n; i++){
            cin>>m;
            cout<<m<<'\n';
            while(m--){
                int x; cin>>x;
                cout<<x<<' ';
                v[i].insert(x);
            }
        }
        cin>>q;
        while(q--){
            int o,x,y;
            set<int> ans;
            if(o==1){
                ans=v[x];
                for(auto u: v[y]){
                    ans.insert(u);
                }      
            }
            else{
                if(sz(v[x])>sz(v[y])){
                    for(auto u: v[x]){
                        if(v[y].count(u))
                            ans.insert(u);
                    }
                }
                else{
                    for(auto u: v[y]){
                        if(v[x].count(u))
                            ans.insert(u);
                    }
                }
            }
             for(auto u: ans){
                    cout<<u<<' ';
                }   
            cout<<sz(ans)<<'\n'; 
        }
        for(int i=1; i<=n; i++){
            v[i].clear();
        }
    }
	return 0;
}