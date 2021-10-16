#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fs first
#define sc second
using namespace std;

int M[504][508][2],l,c,cont;

int bfs(int i, int j){
    queue<pair<int,int>> q;
    q.push({i,j});
    while(!q.empty()){
        i=q.front().fs,j=q.front().sc;
        q.pop();
        cont= M[i][j][1]+1;
        if(i==l+1 && j==c+1){
            return M[i][j][1]; 
        }
        for(int x: {-2,-1,0,1,2}){
            for(int y: {-2,-1,0,1,2}){
                if(M[i+x][j+y][0]==1 && !M[i+x][j+y][1]){
                    q.push({i+x,j+y});
                    M[i+x][j+y][1]=cont;
                }
            }
        }
    }
    return -1;
}

int main(){_
    cin>> l >> c;
    for(int i=2;i<=l+1; i++){
        for(int j=2; j<=c+1;j++){
            cin>> M[i][j][0];
        }
    }
    cout<< bfs(2,2);
    return 0;
}