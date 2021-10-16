#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
using namespace std;

char v[252][252];
int n,totv,totk,contv,contk,m,visitado[252][252];
const set<char> c={'.','v','k'};
void imprime(){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m;j++){
            cout<< v[i][j];
        }
        cout<< '\n';
    }
}
void dfs(int i, int j){
    for(int x: {-1,1}){
        if( c.count(v[i+x][j]) and !visitado[i+x][j]){
            visitado[i+x][j]++;
            //cout<< endl;
            if(v[i+x][j]=='v') {contv++; /*cout<< contv<<endl;*/}
            else if(v[i+x][j]=='k') {contk++; /*cout<< contk<<endl;*/}
            v[i+x][j]='*';
            //imprime();
            dfs(i+x,j);
        }
    }
    for(int x: {-1,1}){
        if(c.count(v[i][j+x]) and !visitado[i][j+x]){
            visitado[i][j+x]++;
            //cout<< endl;
            if(v[i][j+x]=='v') {contv++; /*cout<< contv<<endl;*/}
            else if(v[i][j+x]=='k') {contk++; /*cout<< contk<<endl;*/}
            v[i][j+x]='*';
            //imprime();
            dfs(i,j+x);
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
            if(c.count(v[i][j]) and !visitado[i][j]){
                visitado[i][j]++;
                if(v[i][j]=='v') {contv++; /*cout<< contv<<endl;*/}
                else if(v[i][j]=='k') {contk++; /*cout<< contk<<endl;*/}
                dfs(i,j);
                if(contk>contv) totk+= contk;
                else totv+=contv;
                //cout<< totv<<endl;
                //cout<< totk <<endl;
                contv=0,contk=0;
            }
        }
    }
    cout<< totk <<' '<< totv;
    cout<<'\n';
    return 0;
}