#include <bits/stdc++.h>
#define pb push_back
#define _ ios_base::sync_with_stdio(0);
using namespace std;

int n,m,a,b,visitado[1002],aberto[1002],possible,fila[1002],used[1002];
vector<int> g[1002],chave[1002];

/*bool possible(queue<int> fila){
    //cout<<"fila ";
    while(!fila.empty()){
        int x=fila.front(); fila.pop();
        //cout<<x<<' ';
        if(aberto[x]) return true;
    }
    //cout<<endl<<'\n';
    return false;
}*/

void add(int no,vector<int> v[], queue<int> &q, int t){
    for(int x: v[no]){
        if(!visitado[x]){
            if(t){
                if(aberto[x] and !used[x]){ 
                    possible++;
                    used[x]=1;
                }
                q.push(x);
                fila[x]=1;
            }
            else{
                if(fila[x] and !used[x]){ 
                    possible++;
                    used[x]=1; 
                }
                aberto[x]=1;
            }
        }
    }
}

int bfs(int no){
    int cont=0;
    queue<int> q;
    q.push(no);
    while (!q.empty())
    {
        no=q.front(); q.pop();
        fila[no]=0;
        //cout<<no<<' '<<' '<<possible<<endl;
        if(aberto[no] and !visitado[no]){
            --possible;
            ++cont;
            //cout<<"abriu: "<<no<<" ! ";
            visitado[no]=1;
            add(no,chave,q,0);
            add(no,g,q,1);
        }
        else if(!visitado[no]){
            fila[no]=1;
            q.push(no);
        }
        if(!possible) break;
    }
    //cout<< cont<< endl;
    return cont;
}
int main(){_
    while (cin>>n>>m)
    {
        while(m--){
            cin>> a >>b;
            g[a].pb(b);
            g[b].pb(a);
        }
        for(int i=2; i<=n;i++){
            int k; cin>>k;
            chave[k].pb(i);
        }
        aberto[1]=1;
        possible=1;
        cout<< (bfs(1)==n? "sim":"nao") << '\n';
        for (int i = 1; i <= n; i++)
        {
            g[i].clear();
            chave[i].clear();
            visitado[i]=0;
            aberto[i]=0;
            used[i]=0;
            fila[i]=0;
        }
    }
    return 0;
}