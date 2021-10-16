#include <bits/stdc++.h>
#define inf (int)INFINITY
#define pb push_back
#define fs first
#define sc second
#define pii pair<int,int>
using namespace std;

int n,visitado[200][200],v[200][200],cont;

void dfs(int i, int j){
    cont++;
    //cout<< v[i][j]<<endl;
    for(int x: {-1,1}){
        if(v[i+x][j]>=v[i][j] and !visitado[i+x][j]){
            visitado[i+x][j]++;
            dfs(i+x,j);
        }
        if(v[i][j+x]>=v[i][j] and !visitado[i][j+x]){
            visitado[i][j+x]++;
            dfs(i,j+x);
        }
    }
}

int main(){
    cin>>n;
    int x,y; cin>>x>>y;
    for(int i=2; i<=n+1; i++){
        for(int j=2; j<=n+1; j++){
            cin>>v[i][j];
        }
    }
    visitado[x+1][y+1]++;
    dfs(x+1,y+1);
    cout<< cont<< '\n';
    return 0;
}