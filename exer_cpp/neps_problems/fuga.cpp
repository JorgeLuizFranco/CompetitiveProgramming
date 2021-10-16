#include <bits/stdc++.h>
#define fs first
#define sc second
using namespace std;

int n,m,t[13],xe,ye,xs,ys,maior;


int bfs(int i, int j){
    queue<pair<pair<int,int>,int>> q;
    q.push({{i,j},0});
    while(!q.empty()){
        i=q.fs.fs,j=q.fs.sc,cont=q.sc;
        q.pop();
        if(t[i][j]==-1){
            maior= max(maior,cont);
            continue;
        }
        for(int x: {0,1}){
            if(t[i+x][j+1-x]){
                q.push{{i+x,j+1-x},cont+1};
            }
            if(t[i+x][j-1-x]){
                q.push{{i-x,j-1+x},cont+1};
            }
        }
    }
}

int main(){
    cin>> n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n ;j++){
            cin>> t[i][j];
        }
    }
    cin>> xe >> ye;
    t[xe][ye]=0;
    cin>> xs >> ys;
    t[xs][ys]=-1;
    bfs(xe,ye);
}