#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define fs first
#define sc second
#define pb push_back

using namespace std;

vector<int> v[1001];
int componente[1001],n,m,t,x,y,cont,estradas;

int bfs(int no){
    int j=0;
    int x;
    componente[no]=1;
    queue <int> q;
    q.push(no);
    while(!q.empty()){
        j++;
        no=q.front();
        q.pop();
        for(int i=0; i<v[no].size();i++){
            x=v[no][i];
            if(componente[x]==0){
                componente[x]=1;
                q.push(x);
            }
        }
    }
    return j;
}
int main(){_
    cin>> t;
    for(int c=1; c<=t; c++){
        cin>>n ;
        cin>>m;
        for(int i=1; i<=m;i++){
            cin>> x >>y;
            v[x].pb(y);
            v[y].pb(x);
        }
        cont=estradas=0;
        for(int i=1; i<=n;i++){
            if(componente[i]==0)
            {  cont+=  bfs(i);
               if (cont==n) break;
               estradas ++;
            }

        }
        if(!estradas){
            cout<< "Caso #"<<c<<": a promessa foi cumprida\n";
        }
        else{
            cout<< "Caso #"<<c<<": ainda falta(m) "<< estradas << " estrada(s)\n";
        }
        for(int i=1; i<=n;i++){
            v[i].clear();
            componente[i]=0;
        }
        
    }
    return 0;
}