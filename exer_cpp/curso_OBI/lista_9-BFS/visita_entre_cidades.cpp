#include <bits/stdc++.h>
#define pb push_back
#define sc second
#define fs first
using namespace std;

int n,ini,fim,x,y,d,no,di,componente[10010];
vector<pair<int,int>> v[10010];

int bfs(){
    componente[ini]=1;
    queue<pair<int,int>> q;
    q.push({ini,0});
    while(!q.empty()){
        no=q.front().fs;
        di=q.front().sc;
        q.pop();
        for(auto u: v[no]){
            if(u.fs==fim){
                return (u.sc+di);
            }
            else if(!componente[u.fs]){
                q.push({u.fs,u.sc+di});
                componente[u.fs]=1;
            }
        }
    }
    return -1;
}

int main(){
    cin>> n >> ini >>fim;
    for(int i=0; i<n-1;i++){
        cin>> x >>y >>d;
        v[x].pb({y,d});
        v[y].pb({x,d});
    }
    cout<< bfs();
}