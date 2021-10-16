#include <bits/stdc++.h>

using namespace std;

int M[1002][1002][2],n,m,l,c,cont=0; 

int main(){
    cin>>n >>m;
    for (int i = 1; i <=n; i++)
    {   
        for (int j = 1; j <=m; j++){
            cin>> M[i][j][0];
            if(M[i][j][0]==3){
                l=i;
                c=j;
            }
        }
    }
    int i=l,j=c;
    while (true)
    {
        cont++;
        if(M[i][j-1][0]==2 || M[i][j+1][0]==2 || M[i-1][j][0]==2 || M[i+1][j][0]==2 ){
            cont++;
            cout<< cont;
            return 0;
        }
        else if(M[i-1][j][0]==1 && !(M[i-1][j][1])){
            M[i-1][j][1]=1;
            i--;
        }
        else if(M[i+1][j][0]==1 && !(M[i+1][j][1])){
            M[i+1][j][1]=1;
            i++;
        }
        else if(M[i][j-1][0]==1 && !(M[i][j-1][1])){
            M[i][j-1][1]=1;
            j--;
        }
        else if(M[i][j+1][0]==1 && !(M[i][j+1][1])){
            M[i][j+1][1]=1;
            j++;
        }
    }
}