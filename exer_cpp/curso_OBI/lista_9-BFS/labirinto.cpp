#include <bits/stdc++.h>
#define pii pair<int,int>
#define pb push_back
#define fs first
#define sc second
using namespace std;

int maior,n,m,visitado[504][504];
vector<pair<int,pii>> dist;
char v[504][504];

void dfs(pii no,int cont){
    int i=no.fs,j=no.sc;
    //cout<< "i: "<< i << " j: "<<j<<endl;
    //cout<< v[i][j]<< endl;
    visitado[i][j]++;
    for(int x: {-1,1}){
        if(v[i+x][j]=='.' and !visitado[i+x][j]){
            //cout<< cont+1 << ' '<< i+x << ' '<< j<< endl;
            dist.pb({cont+1,{i+x,j}});
            dfs({i+x,j},cont+1);
        }
        if(v[i][j+x]=='.' and !visitado[i][j+x]){
            //cout<< cont+1 << ' '<< i << ' '<< j+x<< endl;
            dist.pb({cont+1,{i,j+x}});
            dfs({i,j+x},cont+1);
        }
    }
}

int main(){
    while(cin>>n >>m and n+m){
        pii ini;
        for(int i=1,t=0; i<=n; i++){
            for(int j=1; j<=m;j++){
                cin>>v[i][j];
                //cout<< v[i][j]<< ' ';
                if(v[i][j]=='.' and !t){
                    ini={i,j}; t++;
                }
            }
            //cout<< '\n';
        }
        dfs(ini,0);
        auto teste=(*max_element(dist.begin(),dist.end()));
        //cout<< teste.sc.fs<< ' ' << teste.sc.sc<<' '<< teste.fs<<endl;
        dist.clear();
         for(int i=1,t=0; i<=n; i++){
            for(int j=1; j<=m;j++){
                visitado[i][j]=0;
            }
        }
        dfs(teste.sc,0);
        int d= (*max_element(dist.begin(),dist.end())).fs;
        cout<< d<< '\n';
        for(int i=1,t=0; i<=n; i++){
            for(int j=1; j<=m;j++){
                visitado[i][j]=0;
                v[i][j]='#';
            }
        }
        dist.clear();
    }
    return 0;
}