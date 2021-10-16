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

set<int> a,b;
bool q=true;
int main(){_
	int n,m; cin>>n>>m;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        a.insert(x);
    }
    for(int i=0; i<m; i++){
        int x; cin>>x;
        b.insert(x);
    }
    if(sz(a)>sz(b)){
        for(auto x: b){
            if(a.count(x)){
                q=false;
                cout<< x<<'\n';
            }
        }
    }
    else{
        for(auto x: a){
            if(b.count(x)){
                q=false;
                cout<< x<<'\n';
            }
        }
    }
    if(q){
        cout<< '*';
    }
	return 0;
}