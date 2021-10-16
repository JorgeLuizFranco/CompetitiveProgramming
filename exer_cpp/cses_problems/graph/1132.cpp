#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define str(x) to_string(x)
#define pb push_back
#define ll long long
#define maxn 2*(int)1e5+10
using namespace std;

int n,x,y,ans,dist[maxn],dist1[maxn],visited[maxn];
vector<int> g[maxn];

void clean(){
    for(int i=1; i<=n; i++){
        visited[i]=0;
    }
}

void dfs(int no){
    visited[no]++;
    for(int u: g[no]){
        if(!visited[u]){
            dist[u]=dist[no]+1;
            dfs(u);
        }
    }
}

int calc(){
    int maior=-1,no;
    for(int i=1; i<=n; i++){
        if(maior<dist[i]){
            maior=dist[i];
            no=i;
        }
    }
    return no;
}

int main(){_
    cin>>n;
    for(int i=1; i<n; i++){
        cin>>x >>y;
        g[x].pb(y);
        g[y].pb(x);
    }
    dfs(1); clean();
    int no1= calc(); 
    //cout<< no1 <<endl;
    dist[no1]=0;
    dfs(no1); clean();
    int no=calc();
    //cout<< no<<endl;
    copy(dist, dist+n+1, dist1);
    dist[no]=0;
    dfs(no);
    for(int i=1; i<=n; i++){
        cout<< max(dist[i],dist1[i])<<' ';
    }
    return 0;
}