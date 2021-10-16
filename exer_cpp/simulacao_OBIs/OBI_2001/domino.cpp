#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back

using namespace std;

int n,x,y,t,visited[7],ini;

vector<int> v[7];

void dfs(int no){
    visited[no]++;
    //cout<< "no: "<<no <<endl;
    for(int u: v[no]){
        if(!visited[u]){
            dfs(u);
        }
    }
}

int possible(){
    int odd=0;
    for(int i=0; i<=6; i++){
        //cout<< v[i].size()<<endl;
        if(((int)v[i].size())%2==1){
            odd++;
        }
        if(odd>2){
            return 0;
        }
    }
    dfs(ini);
    for(int i=0; i<=6; i++){
        if(!visited[i] and (int)v[i].size()>0){
            return 0;
        }
    }
    return 1;
}

int main(){_
    while(cin>>n and n){
        while (n--)
        {
            cin>>x>>y;
            ini=x;
            v[x].pb(y);
            v[y].pb(x);
        }
        string ans= (possible()? "sim": "nao");
         for(int i=0; i<=6; i++){
            v[i].clear();
            visited[i]=0;
        }
        cout<< "Teste "<<++t<<'\n'<<ans<<'\n'<<'\n';
    }
    return 0;
}