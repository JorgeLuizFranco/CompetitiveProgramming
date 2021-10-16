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
#define maxn 3*(int)1e3+1
#define inf 0x3f3f3f3f
using namespace std;

int v[maxn],a,b;
set<int> c({0,1,2});

int main(){_
	for(int i=1; i<=3000;i++){
        v[i]=1; v[++i]=2; v[++i]=0;
    }
    cin>>a>>b;
    c.erase(v[a]);
    if(v[a]!=v[b]) c.erase(v[b]);
    else c.erase(v[b+1]);
    cout<< *c.begin();
	return 0;
}