#include <bits/stdc++.h>
#define pb push_back
#define fs first
#define sc second

using namespace std;

vector<pair<int,int>> v[10002];
int n,ini,fim,x,y,oni,no;

int bfs(){
    queue<pair<int,int>> q;
    q.push({ini,0});
    while(!q.empty()){
        no= q.front().fs;
        oni= q.front().sc+1;
        q.pop();
        for(int i=0; i<v[no].size();i++){
            if(v[no][i].fs==fim){
                v[no][i].sc+=oni;
                return v[no][i].sc;
            }
            else if(v[no][i].fs!=ini and !v[no][i].sc){
                v[no][i].sc+=oni;
                q.push({v[no][i].fs,v[no][i].sc});
            }
        }
    }
    return 0;
}
int main(){
    cin>>n >>ini>>fim;
    for(int i=0; i<n-1;i++){
        cin>> x >>y;
        v[x].pb({y,0});
        v[y].pb({x,0});
    }
    cout<< bfs();
    return 0;
}