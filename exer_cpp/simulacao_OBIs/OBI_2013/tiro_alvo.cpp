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
#define maxn 2*(int)1e6
#define inf 0x3f3f3f3f
using namespace std;

int c,t;
ll ra[maxn],x,y,ans;

bool check(){
    return true;
}

int main(){_
	cin>>c>>t;
    for(int i=1; i<=c; i++){
        cin>>ra[i];
        //cout<<ra[i]<<' ';
    }
    while(t--){
        cin>>x>>y;
        //cout<<x<<' '<<y<<endl;
        ll d_2=x*x+y*y;
        int l=1,r=c,mid=1;
        while(l<=r){
            mid=(r+l)/2;
            if(d_2<=ra[mid]*ra[mid]){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        ans+=(c-l+1);
    }
    cout<<ans;
	return 0;
}