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
#define maxn 3*(int)1e3+4
#define inf 0x3f3f3f3f
using namespace std;

int n,m,x,qtd,visited[maxn][maxn],idx,dp[2][maxn*maxn],component[maxn*maxn];
char g[maxn][maxn];


void dfs(int i, int j){
    //cout<< i<< ' '<<j<<endl;
    component[idx]++;
    for(int x: {-1,1}){
        if(g[i+x][j]=='#' and !visited[i+x][j]){
            visited[i+x][j]=1;
            g[i+x][j]='o';
            dfs(i+x,j);
        }
        if(g[i][j+x]=='#' and !visited[i][j+x]){
            g[i][j+x]='o';
            visited[i][j+x]=1;
            dfs(i,j+x);
        }
    }
}

int main(){_
	cin>>n>>m>>x;
    //memset(memo,-1,sizeof(memo));
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>g[i][j];
        }
    }
    if(x>n*m){
        cout<<"nao"; return 0;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(g[i][j]=='#' and !visited[i][j]){
                g[i][j]='o';
                ++idx;
                visited[i][j]=1;
                dfs(i,j);
            }
        }
    }
    // dp iterativa
    dp[0][0]=1;
    for(int i=1; i<=idx; i++){
        for(int j=0; j<=x; j++){
            int k= (i&1);
            if(j<component[i]){
                dp[k][j]=dp[!k][j];
            }
            else{
                dp[k][j]= (dp[!k][j] || dp[!k][j-component[i]]);
            }
        }
    }
    cout<< (dp[idx&1][x]? "sim": "nao");
	return 0;   
}