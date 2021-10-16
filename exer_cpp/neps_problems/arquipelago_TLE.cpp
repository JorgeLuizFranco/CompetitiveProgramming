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

int n,m,x,qtd,visited[maxn][maxn],idx,dp[2][maxn];/*,memo[maxn*maxn][maxn*maxn]*/
char g[maxn][maxn];
//unordered_map<int,unordered_map<int,int>> memo;
// dfs e DP pega ou não pega

// int dp(int i, int k){
//     //cout<< i<< ' '<<k<<endl;
//     if(k==0) return 1;
//     if(i<=1) return 0;
//     if(memo[i].find(k)!=memo[i].end()/*m.find(ch) != m.end()*/) return memo[i][k];
//     return memo[i][k]= dp(i-1,k-component[i]) or dp(i-1,k); 
// }

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
    // for(int i=1; i<=idx; i++){
    //     cout<< component[i]<<' ';
    // }
    // cout<<endl;
    // if(dp(idx,x)) cout<< "sim\n";
    // else cout<<"nao\n";
	return 0;
}