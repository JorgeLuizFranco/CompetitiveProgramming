#include <bits/stdc++.h>
#define pb push_back
#define fs first 
#define sc second
using namespace std;

vector <int> v[10002];
int n,x,y,cont,visitado[10002];

void bfs(int no){
    queue<int> q;
    q.push(no);
    while(!q.empty()){
        no= q.front();
        q.pop();
        for(int u: v[no]){
            if(!visitado[u]){
                q.push(u);
                visitado[u]=1;
            }
        }
        cont++;
    }
}

int main(){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>> x >>y;
        v[x].pb(y);
    }
    bfs(1);
    cout<< (cont-1==n? 'S': 'N');
    return 0;
}