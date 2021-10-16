#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define fs first
#define sc second
#define str(x) to_string(x)
#define par pair<int,int>
using namespace std;

struct desempate
{
    int local,medal,tempo,cod;
};

int s,l,r,a,p,m,t,visitado[(int)1e6+2],ans[(int)1e6+2],locais[(int)1e6+2];
vector<int> v[(int)1e6+2];
vector<desempate> sed;

void bfs(){
    queue<par> q;
    for(desempate x: sed){
        if(!ans[x.local]){
            ans[x.local]=x.cod;
        }
        if(!locais[x.local])
            q.push({x.local,x.cod});
        locais[x.local]=1;
    }
    while (!q.empty())
    {
        par no=q.front();q.pop();
        for(int u: v[no.fs]){
            if(!ans[u]){
                q.push({u,no.sc});
                ans[u]=no.sc;
            }
        }
    }
}

bool cmp(desempate a, desempate b){
    if(a.medal!=b.medal){
        return (a.medal > b.medal);
    }
    else {
        return (a.tempo > b.tempo);
    }
}

int main(){_
    cin>> l >>s >> a >>r;
    for(int i=1; i<=s; i++){
        cin>> p >>m>>t;
        desempate d={p,m,t,i};
        sed.pb(d);
    }
    sort(sed.begin(),sed.end(),cmp);
    while (r--)
    {
        int x,y;
        cin>> x >>y;
        v[x].pb(y);
        v[y].pb(x);
    }
    bfs();
    while (a--)
    {
        int al; cin>>al;
        cout<< (ans[al]!=0? str(ans[al]): "Noic")<<'\n';
    }
    return 0;
}