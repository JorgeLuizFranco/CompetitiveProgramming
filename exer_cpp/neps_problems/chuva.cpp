#include <bits/stdc++.h>

using namespace std;

char V[502][502];
int n,m;

int main(){
    cin>>n >>m;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=m; j++){
            cin>> V[i][j];
        }   
    }
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=m; j++){
            if(V[i][j]=='.'){
                if(V[i-1][j]== 'o' || (V[i][j-1]=='o' && V[i+1][j-1]=='#') || (V[i][j+1]=='o' && V[i+1][j+1]=='#')){
                    V[i][j]='o';   
                }
            }
        }   
        for (int j = m; j>=1; j--)
        {
            if(V[i][j]=='.'){
                if(V[i-1][j]== 'o' || (V[i][j-1]=='o' && V[i+1][j-1]=='#') || (V[i][j+1]=='o' && V[i+1][j+1]=='#')){
                     V[i][j]='o';
                }
            }
        }
    }
    for (int i = 1; i <=n; i++){
            for (int j = 1; j <=m; j++){
                cout<< V[i][j];
            }
            cout<< '\n';   
        }
    return 0;
}