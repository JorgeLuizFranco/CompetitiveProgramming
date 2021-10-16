#include <bits/stdc++.h>
#define pb push_back
#define fs first
#define sc second
using namespace std;

vector<int> v[102];
int n,m,x,y,visitado[102],salas[2][102],ar[102];
string linha;

bool solve(int no){
    salas[0][no]=no;
    queue<pair<int,int>> q;
    for(int u: v[no]){
        salas[1][u]=u;
        q.push({u,1});
    }
    while(!q.empty()){
        no=q.front().fs;    
        int sala= (q.front().sc? 0: 1),atual= q.front().sc;
        q.pop();
        for(int u: v[no]){
            salas[sala][u]=u;
            if(salas[atual][u]){
                return false;
            }
            else{
                if(!visitado[u]){
                    visitado[u]++;
                    q.push({u,sala});
                }
            }
        }
    } 
    return true;
}

int main(){
    while(cin>>n and n){
        int no_ini;
        for(int i=0; i<n; i++){
            cin>>x;
            ar[i]=x;
            cin.ignore();
            getline(cin,linha);
            stringstream ss(linha);
            while (ss>>y)
            {
                v[x].pb(y);
                v[y].pb(x);
            }
        }
        bool blz= 1;
        int i=0;
        while(blz and i<n){
            if(!visitado[ar[i]]){
                blz=solve(ar[i]);
            }
            i++;
        }
        cout<< (blz? "SIM\n": "NAO\n");
        //cout<< '\n';
        for(int i=1; i<=n; i++ ){
            v[i].clear();
            visitado[ar[i]]=0;
        }
        for (int i = 1; i <=n; i++)
        {
            salas[0][i]=0,salas[1][i]=0;
        }
    }
    return 0;
}