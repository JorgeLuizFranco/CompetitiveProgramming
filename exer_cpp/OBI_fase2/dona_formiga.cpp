#include <bits/stdc++.h>
#define pb push_back
#define fs first
#define sc second
using namespace std;

vector<int> v[202];
int n,m,ini,x,y,altura[202];

int bfs(int no){
    int cont;
    queue<pair<int,int>> q;
    q.push({no,0});
    while(!q.empty()){
        no= q.front().fs;
        cont = q.front().sc;
        q.pop();
        for(int u: v[no]){
            if(altura[u]<altura[no]){
                q.push({u,cont+1});
            }
        }
    }
    return cont;
}

int main(){
    cin>> n >>m >>ini;
    for(int i=1; i<=n; i++){
        cin>> altura[i];
    }
    for(int i=1; i<=m; i++){
        cin>> x >> y;
        v[x].pb(y);
        v[y].pb(x);
    }
    cout<< bfs(ini);
    return 0;
}