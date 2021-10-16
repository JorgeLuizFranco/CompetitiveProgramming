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

int n,ans;

map<int,pii> m= {{1, {1,2}}, {2, {2,1}}, {3, {2,-1}}, {4, {1,-2}},{5,{-1,-2}},{6,{-2,-1}},{7,{-2,1}},{8,{-1,2}}};;

int main(){_
	cin>>n;
    pii pos,path={4,3};
    set<pii> holes={pii(1, 3), pii(2, 3), pii(2, 5),pii(5, 4)};
    while(n--){
        ++ans;
        int x; cin>>x;
        pos=m[x];
        path.fs+=pos.fs;path.sc+=pos.sc;
        //cout<< path.fs<<' '<<path.sc<<endl;
        if(holes.count(path)) break;
    }
    cout<<ans;
	return 0;
}