#include <bits/stdc++.h>
#define inf (int)INFINITY
#define pb push_back
#define fs first
#define sc second
#define pii pair<int,int>
using namespace std;

vector<int> v[2100];
int n,it,visitado[2100];
map<string,int> m;

int bfs(int ini, int fim){
    queue<pii> q;
    q.push({ini,0});
    while(!q.empty()){
        pii no=q.front();q.pop();
        for(int u: v[no.fs]){
            if(u==fim){
                return no.sc+1;
            }
            else if(!visitado[u]){
                visitado[u]++;
                q.push({u,no.sc+1});
                //cout<< u<< '\n';
            }
        }
    }
    return -1;
}

int main(){
    cin>>n;
    string s1,s2;
    while(n--){
        cin>>s1>>s2;
        if(!m.count(s1)){
            m[s1]=++it;
        }
        if(!m.count(s2)){
            m[s2]=++it;
        }
        v[m[s1]].pb(m[s2]);
    }
    for(auto ite=m.begin(); ite!=(--m.end()); ++ite){
        v[(*ite).sc].pb((*(next(ite))).sc);
        v[(*next(ite)).sc].pb((*(ite)).sc);
    }
    cin>>s1>>s2;
    visitado[m[s1]]++;
    cout<< bfs(m[s1],m[s2]);
    return 0;
}