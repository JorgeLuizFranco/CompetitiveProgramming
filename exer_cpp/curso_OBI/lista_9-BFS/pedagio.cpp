#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio();
#define pb push_back

using namespace std;

vector<int> v[502],vis;
int t,c,e,ini,no,p,x,y,peda[502];

void bfs(){
    queue<int> q;
    q.push(ini);
    while(!q.empty()){
        no= q.front();
        q.pop();
        for(int u: v[no]){
            if(peda[u]==0 and u!=ini){
                peda[u]= peda[no]+1;
                if(peda[u]<=p){
                    q.push(u);
                    vis.pb(u);
                }
            }
        }
    }
}

int main(){_
    while(cin>>c>>e>>ini>>p and c+e+ini+p){
        t++;
        for(int i=1; i<=e; i++){
            cin>> x >>y;
            v[x].pb(y);
            v[y].pb(x);
        }
        bfs();
        sort(vis.begin(),vis.end());
        cout<< "Teste " << t << '\n';
        for(int i: vis){
            cout<< i << ' ';
        }
        cout<< '\n' << '\n';
        for(int i=1; i<=c; i++){
            v[i].clear();
            peda[i]=0;
        }
        vis.clear();
    }
    return 0;
}