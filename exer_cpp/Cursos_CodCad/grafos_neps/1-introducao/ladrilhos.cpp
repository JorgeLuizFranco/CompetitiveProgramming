#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define pii pair<int,int>
#define fs first
#define sc second
using namespace std;

int n,m,v[210][210],visitado[210][210],area,menor=INT_MAX,teste;

void dfs(pii no,int cor){
    int i=no.fs,j=no.sc;
    //cout<< "i: "<< i<< " j: "<<j <<endl;
    area++;
    //cout<< area<<endl;
    for(int x: {-1,1}){
        if(v[i+x][j]==cor and !visitado[i+x][j]){
            visitado[i+x][j]++;
            dfs({i+x,j},cor);
        }
        if(v[i][j+x]==cor and !visitado[i][j+x]){
            visitado[i][j+x]++;
            dfs({i,j+x},cor);
        }
    }
}

int main(){_
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>v[i][j];
            v[i][j]++;
          //  cout<< v[i][j]<< ' ';
        }
        //cout<< '\n';
    }
    //cout<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(!visitado[i][j]){
                visitado[i][j]++;
                area=0;
                dfs({i,j},v[i][j]);
                //menor=min(area,menor);
                if(area<menor){
                    teste=v[i][j];
                    menor=area;
                }
            }
        }
    }
    //cout<<endl;
    cout<< menor<< '\n';
    return 0;
}