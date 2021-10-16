#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int v[1009][1009],n,m,visitado[1009][1009],cont,a[3]={-1,0,1};

void dfs(int i, int j){
    for(int y: {-1,1}){
        if(!visitado[i][j+y] and v[i][j+y]==1){
            visitado[i][j+y]=1;
            dfs(i,j+y);
        }
    }
    for(int x: {-1,1}){
        if(!visitado[i+x][j] and v[i+x][j]==1){
            visitado[i+x][j]=1;
            dfs(i+x,j);
        }
    }
}

int main(){_
    cin>> n >>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>> v[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(v[i][j]==1 and !visitado[i][j] ){
                visitado[i][j]=1;
                dfs(i,j);
                cont++;
            }
        }
    }
    cout<< cont;
    return 0;
}