#include <bits/stdc++.h>
#define pb push_back
#define _ ios_base::sync_with_stdio(0);
using namespace std;

int a,b,n,m,visitado[102],k,cor[102],t;
vector<int> v[102];

int bfs(int no){
    queue<int> q;
    q.push(no);
    cor[no]=0;
    while (!q.empty())
    {
        no=q.front();q.pop();
        for(int u: v[no]){
            if(!visitado[u]){
                cor[u]=1-cor[no];
                q.push(u);
                visitado[u]++;
            }
            else if(cor[u]==cor[no]){
                return 0;
            }
        }
    }
    return 1;
}

int main(){_
    while(cin>> n>> m){
        while(m--){
            cin>> a >>b;
            v[a].pb(b);
            v[b].pb(a);
        }
        cout<< "Instancia "<<++k<<'\n';
        for(int i=1; i<= n; i++){
            if(!visitado[i]){
                if(!bfs(i)){
                    cout<< "nao\n\n";
                    t++;
                    break;
                }
            }
        }
        if(!t) cout<< "sim\n\n"; t=0;
        for (int i = 1; i <=n; i++)
        {
            v[i].clear();
            visitado[i]=0;
            cor[i]=0;
        }
    }
    return 0;
}