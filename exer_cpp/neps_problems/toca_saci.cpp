#include <bits/stdc++.h>

using namespace std;

int v[1005][1005];
int n,m;

int valido (int x, int y){    
     int teste = (x>=0 && y>=0 && x<n && y<m && v[x][y] >0);   
     return teste;
}

int dfs(int l, int c, int cont ){
    int il[4] = {0,0,-1,1};
    int ic[4] = {-1,1,0,0};

    //cout << l << " "<< c << " "<<v[l][c]<< endl;
    if(v[l][c]==2){
        return cont;
    }
    else{
      for (int k=0;k<4;k++)  
        if (valido(l+il[k],c+ic[k])){
            if(v[l+il[k]][c+ic[k]]==1)  v[l+il[k]][c+ic[k]]=-1;
            return dfs(l+il[k],c+ic[k],cont+1);
        }    
    }
    return -5;
}

int main(){
    int l,c;
    cin>> n >>m;
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>> v[i][j];
            if(v[i][j]==3){
                l=i,c= j;
            }
        }
    }
    v[l][c]=-1;
    cout << dfs(l,c,1);
    return 0;
}