#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
using namespace std;

char v[502][502];
int n,f;

void imprime(){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n;j++){
            cout<< v[i][j]/*<< ' '*/;
        }
        cout<< '\n';
    }
}

void dfs(int i, int j){
    if(v[i][j] and v[i][j]!='*' and (v[i][j]-'0')<=f){
        v[i][j]='*';
        dfs(i,j+1);dfs(i,j-1);dfs(i+1,j);dfs(i-1,j);
    }
}

int main(){
    cin>>n>>f;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n;j++){
            cin>>v[i][j];
        }
    }
    //imprime();
    dfs(1,1);
    imprime();
}