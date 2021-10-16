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

int g[maxn][maxn],n,visited[maxn][maxn],check[maxn][maxn];
pii a,b,c;

void printx(){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<check[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;
}

int bfs(pii begx, pii endx){
    queue<pii> q({begx});
    visited[begx.fs][begx.sc]=1;;
    while(!q.empty()){
        auto[i,j]=q.front(); q.pop();
        if(i==endx.fs and j==endx.sc) return 1;
        for(int x:{-1,0,1}){
            for(int y:{-1,0,1}){
                if(x==y) continue;
                if(i+x>=1 and i+x<=n and j+y>=1 and j+y<=n and!visited[i+x][j+y] and !check[i+x][j+y]){
                    visited[i+x][j+y]=1;
                    q.push({i+x,j+y});
                    check[i+x][j+y]=7;
                    //printx();
                }
            }
        }
    }
    return 0;
}

int main(){_
	cin>>n;
    cin>>b.fs>>b.sc>>a.fs>>a.sc>>c.fs>>c.sc;
    for(int i=b.fs; i<=n; i++){
        check[i][b.sc]=1;
    }
    for(int i=b.fs; i>=1; i--){
        check[i][b.sc]=1;
    }
    for(int j=b.sc; j<=n; j++){
        check[b.fs][j]=1;
    }
    for(int j=b.sc; j>=1; j--){
        check[b.fs][j]=1;
    }
    for(int i=b.fs,j=b.sc; i<=n and j<=n; i++,j++){
        check[i][j]=1;
    }
    for(int i=b.fs,j=b.sc; i>=1 and j>=1; i--,j--){
        check[i][j]=1;
    }
    check[a.fs][a.sc]=2;
    //check[c.fs][c.sc]=4;
    check[b.fs][b.sc]=5;
    //printx();
    cout<< (bfs(a,c)?"YES":"NO");
	return 0;
}
