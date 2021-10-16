#include <bits/stdc++.h>
#define pb push_back
#define fs first
#define sc second
using namespace std;

int n,m,x,y,c,r,e,cont;
vector<int> v[1002];
bool visitado[1002];



int bfs(){
    queue<pair<int,int>> q;
    q.push({c,0});
    while(!q.empty()){
        x= q.front().fs;
        cont= q.front().sc+1;
        q.pop();
        for(int i=0; i<v[x].size();i++){
            if(v[x][i]==r){
                return cont;
            }
            else if(v[x][i]!=e and !visitado[v[x][i]]){
                q.push({v[x][i],cont});
                visitado[v[x][i]]=true;
            }
        }
    }
    return 0;
}

int main(){
    while(cin>>n>>m){
        for(int i=1; i<=m; i++){
            cin>> x >>y;
            v[x].pb(y);
            v[y].pb(x);
        }
        cin>>c>>r>>e;
        cout<<bfs() << '\n';
         for(int i=1; i<=n; i++){
            v[i].clear();
            visitado[i]=false;
        }
    }
    return 0;
}