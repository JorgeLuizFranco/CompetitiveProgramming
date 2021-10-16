#include <bits/stdc++.h>

using namespace std;

int x,r[100][100],n;

int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>r[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>x;
            r[i][j]+=x;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<r[i][j] << ' ';
        }
        cout<< '\n';
    }
}