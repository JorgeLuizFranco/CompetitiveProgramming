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
#define maxn 2*(int)1e3
#define inf 0x3f3f3f3f
using namespace std;

int n,g[maxn][maxn],memo[maxn][maxn];

int dfs(int i, int j){
    int w=g[i][j];
    cout<<"peso: "<<w<<'\n';
    if(w==inf) return 0;
    if(memo[i][j]!=-1) return memo[i][j];
    return memo[i][j]=w+max(dfs(i+1,j),dfs(i+1,j+1));
}

int main(){_
	while(cin>>n){
        memset(memo,-1,sizeof(memo));
        memset(g,inf,sizeof(g));
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cin>>g[i][j];
                cout<< g[i][j]<<' ';
            }
            cout<<endl;
        }
        //int ans=dfs(1,1);
        //cout<<(ans<0? 0: ans)<<'\n';   
    }
	return 0;
}