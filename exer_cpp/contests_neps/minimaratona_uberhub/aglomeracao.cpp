#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define sc second

using namespace std;

int n,x,y,v[50][50];
string z;

int main(){_
    cin>>n;
    for(int i=2; i<=n+1; i++){
        for(int j=2; j<=n+1; j++){
            cin>> v[i][j];
        }
    }
     for(int i=2; i<=n+1; i++){
        for(int j=2; j<=n+1; j++){
            if(v[i][j]==1){
                /*v[i+1][j]=2;
                v[i-1][j]=2;
                v[i+1][j+1]=2;
                v[i+1][j-1]=2;
                v[i][j+1]=2;
                v[i][j-1]=2;
                v[i-1][j+1]=2;
                v[i-1][j-1]=2;*/
                for(int x:{0,-1,1}){
                    for(int y:{0,1,-1}){
                        if(v[i+x][j+y]!=1){
                            v[i+x][j+y]=2;
                        }
                    }
                }
            }
        }
    }
    for(int i=2; i<=n+1; i++){
        for(int j=2; j<=n+1; j++){
            cout<< v[i][j]<< ' ';
        }
        cout<< '\n';
    }
    return 0;
}