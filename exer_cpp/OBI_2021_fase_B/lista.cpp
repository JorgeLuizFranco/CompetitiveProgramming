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
#define maxn 2*(int)1e6
#define inf 0x3f3f3f3f
using namespace std;

int n,v[maxn],ans;

int main(){_
	cin>>n;
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }
    int l=1,r=n;
    while(l<r){
        if(v[l]==v[r]){
            l++; r--;
        }
        else if(v[l]>v[r]){
            int sum=v[r]; --r;
            v[r]+=sum;
            ++ans;
        }
        else{
            int sum=v[l]; ++l;
            v[l]+=sum;
            ++ans;
        }
    }
    cout<<ans<<'\n';
	return 0;
}