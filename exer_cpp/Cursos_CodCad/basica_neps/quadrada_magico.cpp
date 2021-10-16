#include <bits/stdc++.h>

using namespace std;


int main(){
    int sum=0,ant=0,n,a; cin>>n;
    int V[n][n];
    for(int i=0;i<n;i++){
        for (int j = 0; j < n; j++)
        {
           cin>> V[i][j];
        }
    }
    for(int i=0; i<n;i++){
        sum=0;
        for(int j=0; j<n;j++){
            sum+= V[i][j];
        }
        if(i==0){
            ant = sum;
        }
        else if(sum!=ant){
            cout<< -1;
            return 0;
        }
    }
    for (int i = 0; i < n; i++){
        sum=0;
        for(int j=0; j<n;j++){
            sum+= V[j][i];
        }
        if(sum!=ant){
            cout<< -1;
            return 0;
        }
    }
    sum=0;
    for (int i = 0; i < n; i++){
        sum+= V[i][i];
    }
    if(sum!=ant){
        cout<< -1;
        return 0;
    }
    sum=0;
    for (int i=0; i < n; i++){
        sum+= V[i][n-i-1];
    }
    if(sum!=ant){
        cout<<-1;
    }
    else{
        cout<< ant;
    }
    return 0;
}