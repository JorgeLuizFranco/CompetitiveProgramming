#include <bits/stdc++.h>

using namespace std;

int n;

int M[102][102];

int main(){
    cin>>n;
    for (int i= 1; i<=n; i++){
        for (int j= 1; j<=n; j++){
            cin>> M[i][j];
        }   
    }
    for (int i= 2; i<=n; i++){
        for (int j= 2; j<=n; j++){
            if(M[i][j-1]+M[i-1][j-1]+M[i-1][j]<2){
                M[i][j]=1;
            }
            else{
                M[i][j]=0;
            }
        }   
    }
    cout<< M[n][n];
    return 0;
}