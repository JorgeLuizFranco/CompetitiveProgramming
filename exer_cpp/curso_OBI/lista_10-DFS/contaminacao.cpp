#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
using namespace std;

char v[502][502];
vector<pair<int,int>> t;
int n,m;

void imprime(){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m;j++){
            cout<< v[i][j]/*<< ' '*/;
        }
        cout<< '\n';
    }
}

void dfs(int i, int j){
    if(v[i][j]=='A'){
        v[i][j]='T';
        dfs(i,j+1);dfs(i,j-1);dfs(i+1,j);dfs(i-1,j);
    }
}

int main(){_
    while(cin>>n>>m and n+m){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m;j++){
                cin>>v[i][j];
                if(v[i][j]=='T'){
                    t.push_back({i,j});
                }
            }
        }
        //imprime();
        for(auto ii : t){
            v[ii.first][ii.second]='A';
            dfs(ii.first,ii.second);
            v[ii.first][ii.second]='T';
        }
        t.clear();
        imprime();
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m;j++){
                v[i][j]=0;
            }
        }
        cout<< '\n';
    }
}