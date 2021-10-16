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

int n,c,s,e,el;

int main(){_
	cin>>n>>c;
    while(n--){
        cin>>s>>e;
        el+=(e-s);
        if(el>c){
            while(n--) cin>>s>>e;
            cout<<"S\n";
            return 0;
        }
    }
    cout<<"N\n";
	return 0;
}