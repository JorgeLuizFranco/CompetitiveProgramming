#include <bits/stdc++.h>
#define fs first
#define sc second
using namespace std;

int M[102][102][3],t,n,m,x,y;

int bfs(){
    int i=x,j=y,cont;
    M[i][j][1]=1;
    queue<pair<int,int>> q;
    q.push({i,j});
    while(!q.empty()){
        i= q.front().fs;
        j= q.front().sc;
        cont =M[i][j][2]+1;
        q.pop();
        for(int a: {-1,0,1}){
            for(int b:{-1,0,1}){
                if(M[i+a][j+b][0]==1 and !M[i+a][j+b][1]){
                    q.push({i+a,j+b});
                    M[i+a][j+b][1]=1;
                    M[i+a][j+b][2]=cont;
                }
            }
        }
    }
    return cont;
}

int main(){
    cin>> t;
    while(t--){
        cin>> n >>m;
        for(int i=1 ;i<=n ;i++){
            for(int j=1; j<=m; j++){
                cin>> M[i][j][0];
            }
        }
        cin>> x>>y;
        M[x][y][2]=0;
        cout << bfs()-1 << '\n';
        for(int i=1 ;i<=n ;i++){
            for(int j=1; j<=m; j++){
                M[i][j][0]=0;
                M[i][j][1]=0;
            }
        }
    }
    return 0;
}