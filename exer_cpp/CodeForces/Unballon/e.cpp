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
#define maxn (2*(int)1e3+10)
#define inf 0x3f3f3f3f
using namespace std;

int n,v[maxn][maxn];
char mp[maxn][maxn];
pii endx;
void solve(pii begx){
    vector<vector<pii>> visited(n+2, vector<pii> (n+2, pii(-1,-1)));
    queue<pii> q({begx});
    endx={-1,-1};
    while(!q.empty()){
        auto [x,y]=q.front(); q.pop();
        cout<<x<<' '<<y;
        if(x<1 or x>n or y<1 or y>n) {
            endx={x,y};
        }
        switch(mp[x][y]){
            case 'B': if(visited[x+1][y]!=pii(-1,-1)){q.push(pii(x+1,y)); visited[x+1][y]={x,y};} break;
            case 'C': if(visited[x-1][y]!=pii(-1,-1)){q.push(pii(x-1,y)); visited[x-1][y]={x,y};} break;
            case 'D': if(visited[x][y+1]!=pii(-1,-1)){q.push(pii(x,y+1)); visited[x][y+1]={x,y};} break;
            case 'E': if(visited[x][y-1]!=pii(-1,-1)){q.push(pii(x,y-1)); visited[x][y-1]={x,y};}
        }
    }
    if(endx!=pii(-1,-1)){
        auto[i,j]=endx;
        while(pii(i,j)!=begx){
            auto [x,y]=visited[i][j];
            v[i][j]=1;
            i=x,j=y;
        }
    }
}

int main(){_
	cin>>n;
    cout<<n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>mp[i][j];
            cout<<mp[i][j]<<' ';
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(!v[i][j])
                solve({i,j});
        }
    }
	return 0;
}