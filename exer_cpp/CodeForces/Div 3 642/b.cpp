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

int t;

int main(){_
	cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        multiset<int> a,b;
        for(int i=0; i<n; i++){
            int x; cin>>x; a.insert(x);
        }
        while(n--){
            int x; cin>>x; b.insert(x);
        }
        while(k--){
            int menor=*a.begin();
            int maior=*b.rbegin();
            if(menor>maior) break;
            a.erase(a.begin());
            b.erase(--b.end());
            a.insert(maior); 
            b.insert(menor); 
        }
        ll ans=0;
        for(auto x: a){
            //cout<< x<<' ';
            ans+=x;
        }
        //cout<<'\n';
        cout<< ans<<'\n'; //cout<<endl;
    }

	return 0;
}