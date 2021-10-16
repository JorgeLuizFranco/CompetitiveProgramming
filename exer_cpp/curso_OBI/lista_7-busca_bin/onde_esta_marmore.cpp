#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define sc second
#define str(x) to_string(x)
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define maxn 2*(int)1e5
#define inf 0x3f3f3f3f
using namespace std;

int t,n,q,v[maxn];

int bb(int x){
    int r=n,l=1;
    while(r>=l){
        //cout<<r<<endl;
        //cout<<l<<endl;
        int mid= l+(r-l)/2;
        //cout<<mid<<endl;
        if(v[mid]==x and v[mid-1]!=x) return mid;
        if(v[mid]<x){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return 0;
}

int main(){_
    while(cin>>n>>q and n+q){
        cout<<"CASE# "<<++t<<":\n";
        for(int i=1; i<=n; i++){
            cin>>v[i];
        }
        sort(v+1,v+n+1);
        while(q--){
            int x; cin>>x;
            int ans=bb(x);
            if(!ans) cout<<x<<" not found";
            else cout<<x<<" found at "<<ans;
            cout<<'\n';
        }
        memset(v,0,sizeof(v));
    }
	return 0;
}