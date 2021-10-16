#include <bits/stdc++.h>
#define fs first
#define sc second
#define pb push_back
using namespace std;

vector <pair<int,int>> v[100001],time1,time2;
int n,m,x;

void bfs(int no=1){
    v[1].sc=
    queue<int> q;
    q.push(no);
    while(!q.empty()){
        no=q.front(); q.pop();
        for(int i=0; i<v[no].size(); i++){
                   
        }
    }
}

int main(){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>m;
        while(m--){
            cin>>x;
            v[i].pb({x,1});
            v[x].pb({i,1});
        }
    }
    bfs(1);
    return 0;
}