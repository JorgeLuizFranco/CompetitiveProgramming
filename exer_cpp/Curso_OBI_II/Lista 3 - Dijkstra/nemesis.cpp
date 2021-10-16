#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define ctoi(x) int(x-'0')
#define sc second
#define str(x) to_string(x)
#define pii pair<int,int>
#define maxn 2*(int)1e5
#define inf 0x3f3f3f3f
using namespace std;

pii ini,fim;
int n,m,dist[505][505],processed[505][505];
char v[505][505];

bool possible(int i, int j){
    return (v[i][j]=='.' or (v[i][j]>='1' and v[i][j]<='9'));
}

void dijkstra(){
    priority_queue<pair<int,pii>,vector<pair<int,pii>>,greater<pair<int,pii>>> q;
    q.push({0,ini});
    while (!q.empty())
    {
        pii u; int d,i,j;
        auto no=q.top(); q.pop();
        tie(d,u)=no;
        tie(i,j)=u;
        //cout<< i<<' '<<j<<'\n';
        if(processed[i][j]) continue;
        processed[i][j]=1;
        for(int x:{-1,1}){
            if(fim==pii(i+x,j) or fim==pii(i,j+x)){
                int a,b; tie(a,b)=fim;
                if(dist[a][b]>d){
                    dist[a][b]=d;
                }
            } 
            if(possible(i+x,j)){
                if(v[i+x][j]=='.'){
                    if(dist[i+x][j]>d){
                        dist[i+x][j]=d;
                        q.push({dist[i+x][j],{i+x,j}});;
                    }
                }
                else{
                    int w=ctoi(v[i+x][j])+d;
                    if(dist[i+x][j]>w){
                        dist[i+x][j]=w;
                        q.push({dist[i+x][j],{i+x,j}});;
                    }
                }
            }
             if(possible(i,j+x)){
                if(v[i][j+x]=='.'){
                    if(dist[i][j+x]>d){
                        dist[i][j+x]=d;
                        q.push({dist[i][j+x],{i,j+x}});;
                    }
                }
                else{
                    int w=ctoi(v[i][j+x])+d;
                    if(dist[i][j+x]>w){
                        dist[i][j+x]=w;
                        q.push({dist[i][j+x],{i,j+x}});;
                    }
                }
            }
        }
    }
}

int main(){_
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>v[i][j];
            dist[i][j]=inf;
            if(v[i][j]=='H'){
               // cout<<v[i][j]<<endl;
                ini=pii(i,j);
            }
            else if(v[i][j]=='E'){
                fim=pii(i,j);
            }
        }
    }
   
    dijkstra();
    int a,b; tie(a,b)=fim;
    cout<< (dist[a][b]==inf? "ARTSKJID" : str(dist[a][b]))<<'\n';
    return 0;
}