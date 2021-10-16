#include <bits/stdc++.h>

using namespace std;

int n,m,k,x,y,cont;
bool destruiu;
char v[102][102];

void dfs(int i, int j){
    for(int y: {-1,1}){
        if(v[i][j+y]=='#'){
            destruiu=false;
            return;
        }
        else if(v[i][j+y]=='b'){
            v[i][j+y]='v';
            dfs(i,j+y);
        }
    }
    for(int x: {-1,1}){
        if(v[i+x][j]=='#'){
            destruiu=false;
            return;
        }
        else if(v[i+x][j]=='b'){
            v[i+x][j]='v';
            dfs(i+x,j);
        }
    }
}
/*void dfs(int i, int j){
    if(v[i][j-1]=='#' or v[i][j+1]=='#'){
        destruiu=false;
        return;
    }
    if(v[i][j+1]=='b'){
        v[i][j+1]='v';
        dfs(i,j+1);
    }
    if(v[i][j-1]=='b'){
        v[i][j-1]='v';
        dfs(i,j-1);
    }
}*/

int main(){
    cin>> n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>> v[i][j];
        }
    }
    cin>>k;
    while(k--){
        cin>> x >>y;
        if(v[x][y]=='#'){
            v[x][y]='b';
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(v[i][j]=='b'){
                destruiu=true;
                dfs(i,j);
                if(destruiu) cont++;
            }
        }
    }
    cout<< cont;
    return 0;
}