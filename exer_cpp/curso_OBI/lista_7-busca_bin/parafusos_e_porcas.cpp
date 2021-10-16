#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define sc second
#define ll long long
#define ub upper_bound
#define lb lower_bound
#define print(x) for(int wx=0; wx<sz(x); wx++) cout<< x[wx]<< ' ';
#define str(x) to_string(x)
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define maxn 2*(int)1e5
#define inf 0x3f3f3f3f
using namespace std;

int n;

pii bb(vector<int> &v, int x){
    return pii(ub(all(v),x)-v.begin(),lb(all(v),x)-v.begin());
}

int main(){_
	while(cin>>n){
        vector<int> v;
        while(n--){
            int a,b;
            cin>> a >>b;
            for(int i=a; i<=b; i++){
                v.pb(i);
            }
        }
        //print(v);
        //cout<<endl;
        sort(all(v));
        //print(v);
        //cout<<endl;
        int x; cin>>x; //cout<<x<<endl;
        auto ans=bb(v,x);
        if(v[ans.sc]==x)
            cout<<x<<" found from " <<ans.sc<<" to "<<ans.fs-1<<'\n';
        else cout<<x<<" not found\n";
    }
	return 0;
}