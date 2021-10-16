#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define zero 2
#define pb push_back
#define pf push_front
#define fs first
#define sc second
#define pii pair<int,int>

using namespace std;

int n,v[105][105],visited[105][105];

int bfs(pii no, pii fim){
    int i,j;
    deque<pair<pii,int>> q;
    q.pb({{no.fs,no.sc},0});
    while (!q.empty())
    {
        tie(i,j)=q.front().fs;
        //cout<< i<< ' '<<j <<endl;
        int qtd=q.front().sc; q.pop_front();
        for(int x:{-1,1}){
            if(pii(i+x,j)==fim or pii(i,j+x)==fim){
                return qtd;
            }
            else{ 
                if(!visited[i+x][j]){
                    visited[i+x][j]++;
                    if(v[i+x][j]==zero){
                        q.pf({{i+x,j},qtd});
                    }
                    else if(v[i+x][j]==1){
                        q.pb({{i+x,j},qtd+1});
                    }
                }
                if(!visited[i][j+x]){
                    visited[i][j+x]++;
                    if(v[i][j+x]==zero){
                        q.pf({{i,j+x},qtd});
                    }
                    else if(v[i][j+x]==1){
                        q.pb({{i,j+x},qtd+1});
                    }
                }
            }
        }
        
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    for(int i=2; i<=n+1; i++){
        for(int j=2; j<=n+1; j++){
            cin>>v[i][j];
            if(!v[i][j]) v[i][j]+=2;
        }
    }
    cout<< bfs({2,2},{n+1,n+1});
    return 0;
}