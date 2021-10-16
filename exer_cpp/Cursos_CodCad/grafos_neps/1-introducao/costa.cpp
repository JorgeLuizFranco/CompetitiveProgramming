#include <bits/stdc++.h>

using namespace std;


char V[1002][1002];
int n,m;

int main(){
    int cont=0; char c;
    cin>> n >>m;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            cin>> c;
            V[i][j]=c;
        }
    }
      for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=m; j++)
        {   if(V[i][j]=='#'){
                if(V[i-1][j]!='#' || V[i+1][j]!='#' || V[i][j-1]!='#' || V[i][j+1]!='#'){
                    cont++;
                }
            }
        }
    }
    cout<< cont;
    return 0;
}