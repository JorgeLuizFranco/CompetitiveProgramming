#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
using namespace std;

char v[1026][1026];
int n,m,/*visitado[1026][1026],*/cont;

/*void imprime(){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m;j++){
            cout<< v[i][j]<< ' ';
        }
        printf("\n");
    }
}*/
void dfs(int i, int j, char cor){
    for(int x: {-1,1}){
        if(/*!visitado[i+x][j] and*/ v[i+x][j]==cor){
            //visitado[i+x][j]=1;
            v[i+x][j]='v';
            dfs(i+x,j,cor);
        }
    }
    for(int x: {-1,1}){
        if(/*!visitado[i][j+x] and*/ v[i][j+x]==cor){
            v[i][j+x]='v';
            dfs(i,j+x,cor);
        }
    }
}

int main(){_
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m;j++){
            cin>>v[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m;j++){
            if(/*!visitado[i][j] and*/ v[i][j]=='.'){
                //cout<< "entrou\n";
                v[i][j]='v';
                //imprime();
                dfs(i,j,'.');
                cont++;
            }
        }
    }
    cout<< cont<<'\n';
}