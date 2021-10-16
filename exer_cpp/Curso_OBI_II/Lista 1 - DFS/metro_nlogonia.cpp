#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define fs first
#define sc second
#define pb push_back
#define ln() cout<<'\n'

using namespace std;

int n,m,visitado[(int)1e5 +10],dist[(int)1e5 +10],dist1[(int)1e5 +10],dist2[(int)1e5 +10];
vector<int> v[(int)1e5 +10];

void calc(int *maior, int *no, int tam){
    for(int i=1; i<=tam ; i++){
        if(*maior<dist[i]){
            *maior=dist[i];
            *no=i;
        }
    }
}

void dfs(int no,int k){
    //cout<< no<< ' ';
    visitado[no]++;
    for(int u: v[no]){
        if(!visitado[u]){
            dist[u]=dist[no]+1;
            dfs(u,k);
        }
    }
}

void zera(int k){
    for(int i=1; i<=k; i++){
        visitado[i]=0;
    }
}

void limpa(){
    zera(n);
    for(int i=0; i<=n+1;i++){
        v[i].clear();
        dist[i]=0;
    }
}

/*int resp(int k, int t){
    int imp=1,is,no;
    if(k%2==0){
        imp=0,is=1; 
    } 
    for(int i=1; i<=n; i++){
        if(abs(dist[i] - dist2[i]) <= 1 && dist[i] + dist2[i] == dist[t]){
            if(imp){ 
                //cout<< i<< endl;
                return i;
            }
            else{
                if(is){
                    no=i;
                    is--;
                }
                else{
                    if(dist1[i]>dist1[no]) no=i;
                    return i;
                }
            }
        }
    }
    return -1;
}*/

int resp(int k, int t){
    vector<int> ans;
    for(int i=1; i<=k; i++){
        if(abs(dist[i] - dist2[i]) <= 1 && dist[i] + dist2[i] == dist[t]){
            ans.pb(i);
        }
    }
    if(dist1[ans.front()]<dist1[ans.back()]){
        return ans.back();
    }
    else{
        return ans.front();
    }
}

int solve(int k){
    //grafo 1
    //cout<< "grafo1"<<endl;
    dfs(1,k);
    zera(k);
    copy(dist,dist+k,dist1);
    int maior=-1,no1,no2;
    calc(&maior,&no1,k);
    //cout<< "no1: "<< no1<<endl;
    dist[no1]=0;
    dfs(no1,k);
    zera(k);
    copy(dist,dist+k,dist2);
    maior=-1;
    calc(&maior,&no2,k);
    dist[no2]=0;
    dfs(no2,k);
    //cout<< "no2: "<< no2<<endl;   
    /*for(int i=1; i<=k; i++){
        cout<< "dist: " << dist[i]<< ' ';
        cout<< "dist2: " << dist2[i]<< ' ';
        cout<< "dist1: " << dist1[i]<< ' ';
    }*/
    return resp(k,no1);
}

int main(){_
    cin>>n >>m;
    for(int i=1; i<n; i++){
        int x,y; cin>>x>>y;
        v[x].pb(y); v[y].pb(x);
    }
    cout<< solve(n)<< ' '; //ln();
    limpa();
    for(int i=1; i<m; i++){
        int x,y; cin>>x>>y;
        v[x].pb(y); v[y].pb(x);
    }
    cout<< solve(m);
    return 0;
}