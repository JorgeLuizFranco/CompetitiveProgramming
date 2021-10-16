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

int v[maxn],n,m,idx,s1,s2;

int main(){_
	cin>>n; 
    for(int i=1; i<=n; i++){
        cin>>v[i];
        if(v[i]>m){
            m=v[i];
            idx=i;
        }
    }
    for(int i=1; i<idx; i++){
        s1+=v[i];
    }
    for(int i=idx+1; i<=n; i++){
        s2+=v[i];
    }
    cout<<s1<<'\n'<<s2<<'\n';
	return 0;
}