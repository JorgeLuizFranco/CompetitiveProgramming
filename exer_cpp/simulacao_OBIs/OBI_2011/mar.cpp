#include <bits/stdc++.h>

using namespace std;

int n,xi,yi,xf,yf,visited[102][102],ans;

void printmatriz(){
    for(int i=1; i<=yf; i++){
        for(int j=1; j<=xf; j++){
            cout<<visited[i][j]<< ' ';
        }
        cout<<endl;
    }
}

int main(){
    cin>>n;
    while(n--){
        cin>>xi>>xf>>yi>>yf;
        for(int i=yi; i<yf; i++){
            for(int j=xi; j<xf; j++){
                //cout<< visited[i][j]<<'\n';
                //printmatriz();
                //cout<<" \nOPA\n";
                if(!visited[i][j]) ans++;
                visited[i][j]=1;
            }
        }
    }
    cout<< ans;
    return 0;
}