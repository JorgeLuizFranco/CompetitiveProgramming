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
#define maxn 2*(int)1e3
#define inf 0x3f3f3f3f
using namespace std;

int memo[maxn][maxn],n,m,k,visited[maxn][maxn];
char g[maxn][maxn];

void imprime(){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<< g[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;
}

int dp(int i, int j){
    //cout<<i<<' '<<j<<endl;
    if(i<1 or i>n or j<1 or j>m) return 0;
    if(g[i][j]=='*'){
        return 1;
    }
    //g[i][j]='o';
    //imprime();
    if(~memo[i][j]) return memo[i][j];
    visited[i][j]=1;
    memo[i][j]=0;
    for(int x: {-1,1}){
        if(!visited[i+x][j]){
            memo[i][j]+= dp(i+x,j);
        }
        if(!visited[i][j+x]){
            memo[i][j]+=dp(i,j+x);
        }
    }
    return memo[i][j];
}


void dfs(int i, int j, int k){
    visited[i][j]=2;
    memo[i][j]=k;
    for(int x: {-1,1}){
        if(visited[i+x][j]!=2 and g[i+x][j]=='.'){
            dfs(i+x,j,k);
        }
        if(visited[i][j+x]!=2 and g[i][j+x]=='.'){
            dfs(i,j+x,k);
        }
    }
}

int main(){_
    memset(memo,-1,sizeof(memo));
    cin>>n>>m>>k;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>g[i][j];
        }
    }
    while(k--){
        int x,y; cin>>x>>y;
        //cout<<x<<' '<<y<<endl;
        if(!visited[x][y]){
            dp(x,y);
            dfs(x,y,memo[x][y]);
        }
        cout<< memo[x][y]<<'\n';
    }
    return 0;
}