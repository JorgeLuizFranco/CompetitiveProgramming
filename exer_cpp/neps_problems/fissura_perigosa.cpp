#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;



int M[502][502];
int n,f;

void bfs(int f){
    int i,j;
    if(M[1][1]<=f){
        M[1][1]=-1;
        queue<pair<int,int>> q;
        q.push({1,1});
        while(q.size()){
            i=q.front().first, j=q.front().second;
            q.pop();
            //cout << i << " - " << j << endl;
            if(M[i-1][j]>0 && M[i-1][j]<=f){
                M[i-1][j]=-1;
                q.push({i-1,j});
            }
            if(M[i+1][j]>0 && M[i+1][j]<=f){
                 M[i+1][j]=-1;
                q.push({i+1,j});
            }
            if(M[i][j-1]>0 && M[i][j-1]<=f){
                 M[i][j-1]=-1;
                q.push({i,j-1});
            }
            if(M[i][j+1]>0 && M[i][j+1]<=f){
                M[i][j+1]=-1;
                q.push({i,j+1});
            }
            
        }
    }
}

string linha;
int main(){
    cin>> n;
    cin>>f;
    cin.ignore();
    for (int i = 1; i <= n; i++){
        getline(cin,linha);
        for (int j = 1; j <= n; j++){
            M[i][j]=  linha[j-1]-'0';
        }   
    }
    bfs(f);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if(M[i][j]==-1){
                cout<< '*' ;
            }
            else{
                cout<< M[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}