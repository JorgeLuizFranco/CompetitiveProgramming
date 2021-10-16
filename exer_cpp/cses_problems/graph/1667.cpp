#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define sc second
#define str(x) to_string(x)
#define pii pair<int,int>
#define maxn 2*(int)1e5+10
#define inf 0x3f3f3f3f
using namespace std;

int n,m,x,y,visited[maxn],dist[maxn];
queue<int> q;
vector<int> g[maxn];

int bfs(int ini, int fim){
    visited[ini]=-1;
    q.push(ini);
    while (!q.empty())
    {
        int no=q.front(); q.pop();
        if(no==fim) return 1;
        for(int u: g[no]){
            if(!visited[u]){
                visited[u]=no;
                dist[u]=dist[no]+1;
                q.push(u);
            }
        }
    }
    return 0;
}

int main(){
    cin>>n>>m;
    while (m--)
    {
        cin>>x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }
    if(!bfs(1,n)) cout<< "IMPOSSIBLE\n";
    else{
        int i=n;
        vector<string> ans;
        cout<< dist[n]+1<<'\n';
        while(visited[i]!=-1){
            ans.pb(str(i)+" ");
            i=visited[i];
        }
        ans.pb(str(i)+" ");
        reverse(ans.begin(),ans.end());
        for(string u: ans){
            cout<< u;
        }
    }
    return 0;
}