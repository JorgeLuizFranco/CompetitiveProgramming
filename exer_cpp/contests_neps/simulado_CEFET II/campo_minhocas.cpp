#include <bits/stdc++.h>

using namespace std;

long long v[102][102];
int n,m,maior,linha,coluna;
int main(){
    cin>> n >>m;
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            cin>> v[i][j];
            linha+=v[i][j];
        }
        if(linha>maior){
            maior=linha;
        }
        linha=0;
    }
    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            coluna+=v[i][j];
        }
        if(coluna>maior){
            maior=coluna;
        }
        coluna=0;
    }
    cout<< maior;
}