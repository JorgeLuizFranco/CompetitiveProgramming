#include <bits/stdc++.h>
//#define _ ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
using namespace std;

int v[206][206],n,m,cont,k,ini_x,ini_y,a,b;

bool teste(int t,int x,int i){
    if(t){
        return ((x+i)>0 and (x+i)<=m);
    }
    else{
        return ((x+i)>0 and (x+i)<=n);
    }
}

void dfs(int i, int j){
    cont++;
    //cout<< "\n i j "<< i <<  ' '<<j << ' '<<cont <<'\n';
    for(int x: {-1,0,1}){
        for(int y: {-1,0,1}){
            if(teste(0,x,i) and teste(1,y,j))
                if(v[i+x][j+y]==0){
                    v[i+x][j+y]=1;
                    dfs(i+x,j+y);
                }
        }
    }
    //cout<< "\n fim \n";
}

int main(){//_
    cin >> n >> m >> ini_x >> ini_y >> k;
    while(k--){
        cin>> a >>b;
        v[a][b]=1;
    }
    v[ini_x][ini_y]=1;
    //cout<< "ini "<<ini_x << ' '<<ini_y;
    dfs(ini_x,ini_y);
    cout<< cont;
}