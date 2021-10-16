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

int n,d,x;
ll ans;

int main(){_
	cin>>d>>n;
    if(d==0){
        cout<<((n==100)? n+1: n); return 0;
    }
    else if(d==1) x=100;
    else x=100*100;
    for(int i=1; i<=n; i++){
        ans+=x;
    }
    cout<<((n==100)? ans+x: ans); return 0;;
	return 0;
}