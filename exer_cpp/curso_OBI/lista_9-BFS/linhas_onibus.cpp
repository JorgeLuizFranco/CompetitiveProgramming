#include <bits/stdc++.h>
#define fs first
#define sc second
#define pb push_back
#define _ ios_base::sync_with_stdio(0);
using namespace std;

vector<int> v[504];
int c,t,l,o,d,x,visitado[504],adj[504][504];

queue<pair<int,int>> q;

int bfs(){
    visitado[o]++;
    q.push({o,0});
    while (!q.empty())
    {
        int no=q.front().fs,cont=q.front().sc+1;q.pop();
        for(int u: v[no]){
            if(!visitado[u]){
                visitado[u]++;
                if(u==d){
                    return cont;
                }
                else{
                    q.push({u,cont});
                }
            }
        }
    }
    return -1;
}

int main(){_
    cin>> t >>l >> o >>d;
    while (l--)
    {
        cin>>c;
        vector<int> aux;
        for(int i=0; i<c; i++){
            cin>> x;
            aux.pb(x);
        }  
        for(int i=0; i<c; i++){
            for(int y: aux){
                if(y!=aux[i]){
                    if(!adj[aux[i]][y]){
                        v[aux[i]].pb(y);
                        adj[aux[i]][y]=1;
                    }
                }
            }
        }
    }
    cout<< bfs();
    return 0;
}