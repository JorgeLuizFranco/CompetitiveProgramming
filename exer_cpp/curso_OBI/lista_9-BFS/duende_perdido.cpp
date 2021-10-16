#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define sc second

using namespace std;

int M[12][12][2],n,m,x,y;

int bfs(){
    queue<pair<int,int>> q;
    int i=x,j=y,cont;
    q.push({i,j});
    while(!q.empty()){
        //cout<< M[i][j][0]<< "Entrou no while \n";
        i=q.front().fs,j=q.front().sc;
        q.pop();
        //cout<< " Essa eh a qtd : " << M[i][j][1] << '\n';
        if(M[i][j][0]==-1){
           // cout<< "Entrou no fim";
            //cout<< " Essa eh a qtd : " << M[i][j][1] << '\n';
            return M[i][j][1];
        }
        cont= M[i][j][1]+1;
        if((M[i][j+1][0]==1 || M[i][j+1][0]==-1) && !M[i][j+1][1]){
            M[i][j+1][1]=cont;
            //cout<< "valor : " <<   M[i][j+1][0] <<" qtd : " << M[i][j+1][1] << " primeiro if \n";
            q.push({i,j+1});
        }
        if((M[i][j-1][0]==1 || M[i][j-1][0]==-1) && !M[i][j-1][1]){
            //cout<< "valor : " <<   M[i][j-1][0] <<" qtd : " << M[i][j-1][1] << " segundo if \n";
            M[i][j-1][1]=cont;
            q.push({i,j-1});
        }
        if((M[i+1][j][0]==1 || M[i+1][j][0]==-1) && !M[i+1][j][1]){
            //cout<< "valor : " <<   M[i+1][j][0] <<" qtd : " << M[i+1][j][1] << " primeiro if \n";
            M[i+1][j][1]=cont;
            q.push({i+1,j});
        }
        if((M[i-1][j][0]==1 || M[i-1][j][0]==-1) && !M[i-1][j][1]){
            //cout<< "valor : " <<   M[i-1][j][0] <<" qtd : " << M[i-1][j][1] << " primeiro if \n";
            M[i-1][j][1]=cont;
            q.push({i-1,j});
        }
    }
    return 0;
}

int main(){_
    cin>>n >>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>> M[i][j][0];
            if(M[i][j][0]==0){
                M[i][j][0]=-1;
            }
            else if(M[i][j][0]==3){
                x=i,y=j;
            }
        }
    }
    cout<< bfs();
    return 0;
}