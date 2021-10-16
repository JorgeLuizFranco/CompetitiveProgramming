#include <bits/stdc++.h>
#define inf (int)INFINITY
#define pb push_back
using namespace std;

vector<int> v[505];
int n,m,ins,id[505],x,y,idx[505],visitado[505];
char op;

void troca(int a, int b){
    swap(id[idx[a]],id[idx[b]]);
    swap(idx[a],idx[b]);
}

int pergunta(int no){
    memset(visitado,0,sizeof visitado);
    //cout<< "pergunta ";
    visitado[no]++;
    int menor=inf;
    queue<int> q;
    q.push(no);
    while (!q.empty())
    {
        no=q.front(); q.pop();
        //cout<< no << " chefes:\n";
        for(int u: v[no]){
            //cout<< u << '\n';
            if(!visitado[u]){
                visitado[u]++;
                menor= min(menor,id[u]);
                q.push(u);
            }
        }
    }
    //cout<< "pergunta fim\n";
    return menor;
}

int main(){
    cin>> n >> m >>ins;
    for(int i=1;i<=n;i++){
        cin>>id[i];
        idx[i]=i;
    }
    while(m--){
        cin>> x >>y;
        v[y].pb(x);
    }
    while (ins--)
    {
        cin>> op;
        if(op=='T'){
            int a,b;
            cin>> a >>b;
            troca(a,b);
        }
        else{
            int e; cin>>e;
            int ans= pergunta(idx[e]);
            cout<< (ans==inf? "*" : to_string(ans)) << '\n';
        }    
    }
    return 0;
}