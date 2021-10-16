#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define sc second
#define ll long long
#define str(x) to_string(x)
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define maxn 2*(int)1e6
#define inf 0x3f3f3f3f
using namespace std;

int t,n,k,pos[maxn],v[maxn],memo[maxn];
 
int solve(int x, int dmin){   
  
    if(x==n+1) return 0;
    if(pos[x] < dmin) return solve(x+1,dmin);
    if(~memo[x]) return memo[x];
    else {
        /*int caso1= solve(x+1,dmin);
        int caso2= solve(x+1,pos[x]+k)+v[x];*/
        return memo[x]=max(solve(x+1,dmin),solve(x+1,pos[x]+k)+v[x]);
    }
}

int main(){_
	cin>>t;
    while(t--){
        cin>>n>>k;
        /*memset(memo,-1,sizeof(memo));
        memset(v,0,sizeof(v));
        memset(pos,0,sizeof(pos));*/
        for(int i=0; i<=n+1; i++){
            memo[i]=-1,v[i]=0,pos[i]=0;
        }
        for(int i=1; i<=n; i++){
            cin>>pos[i];
        }
        for(int i=1; i<=n; i++){
            cin>>v[i];
        }
        cout<< solve(1,0)<<'\n';
    }
	return 0;
}