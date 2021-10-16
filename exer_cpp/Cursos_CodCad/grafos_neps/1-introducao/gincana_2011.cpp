#include <bits/stdc++.h>
#define ins insert
#define pb push_back

using namespace std;


set<int> v[1002];
int n,m,x,y,componente[1002],cont;

void bfs(int no){
    queue<int> q;
    q.push(no);
    while(!q.empty()){
        no= q.front();
        q.pop();
        for(int u: v[no]){
            if(!componente[u]){
                q.push(u);
                componente[u]++;
            }
        }
    }
}

int main(){
    cin>> n >>m;
    for(int i=0; i<m; i++){
        cin>>x >>y;
        v[x].ins(y);
        v[y].ins(x);
    }
    for(int i=1; i<=n; i++){
        if(!componente[i]){
            cont++;
            bfs(i);
        }
    }
    cout<< cont;
    return 0;
}