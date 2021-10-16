#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define pf push_front
#define border '\0'
#define inf 0x3f3f3f3f
#define fs first
#define sc second
#define str(x) to_string(x)
#define pii pair<int,int>

using namespace std;

int t,m,n,visited[1006][1006],dist[1006][1006];

char v[1006][1006];

int bfs(pii ini, pii fim){
    deque<pair<pii,int>> q;
    q.pb({ini,0});
    while (!q.empty())
    {
        int i,j,qtd;
        tie(i,j)=q.front().fs;
        cout<< dist[i][j]<<endl;
        visited[i][j]++;
        //cout<< "v: "<< v[i][j]<< "  i: "<<i<< ' '<<"j: "<<j << endl;
        qtd=q.front().sc; q.pop_front();
        if(pii(i,j)==fim) return qtd;
        for(int x:{-1,1}){
            if(!visited[i+x][j] and v[i+x][j]!=border and dist[i][j]+qtd<dist[i+x][j]){
                //cout<< "vx: "<<v[i+x][j]<<"  i: "<<i+x<<" j: "<<j <<endl;
                dist[i+x][j]=dist[i][j]+qtd;
                if(v[i+x][j]==v[i][j]){
                    q.pf({{i+x,j},qtd});
                }
                else{
                    q.pb({{i+x,j},qtd+1});
                }
            }
            if(!visited[i][j+x] and v[i][j+x]!=border and dist[i][j+x]+qtd<dist[i][j+x]){
                //cout<< "vy: "<<v[i][j+x]<<"  i: "<<i<<" j: "<<j+x <<endl;
                dist[i][j+x]=dist[i][j]+qtd;
                if(v[i][j+x]==v[i][j]){
                    q.pf({{i,j+x},qtd});
                }
                else{
                    q.pb({{i,j+x},qtd+1});
                }
            }
        }
    }
    return -1;
}

int main(){_
    cin>> t;
    while(t--){
        cin>>n>>m;
        //cout<< n << ' '<< m <<endl;
        for(int i=2; i<=n+1; i++){
            for(int j=2; j<=m+1; j++){
                cin>>v[i][j];
                dist[i][j]=inf;
            }
        }
        visited[2][2]=1;
        dist[2][2]=0;
        cout<< bfs({2,2},{n+1,m+1})<<'\n';
        for(int i=2; i<=n+1; i++){
            for(int j=2; j<=m+1; j++){
                dist[i][j]=
                v[i][j]=border;
                visited[i][j]=0;
            }
        }
    }
    return 0;
}