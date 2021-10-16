#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define ctoi(x) int(x-'0')
#define sc second
#define str(x) to_string(x)
#define pii pair<int,int>
#define maxn 2*(int)1e5
#define inf 0x3f3f3f3f
using namespace std;

map<string,int> d;
int n,m,x,ini,fim,k,dist[102];
vector<pii> g[102];
bitset<102> processed;
void dijkstra(){
    dist[ini]=0;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0,ini});
    while (!q.empty())
    {
        int v,d;
        tie(d,v)= q.top(); q.pop();
        if(processed[v]) continue;
        processed[v]=true;
        //cout<<v<<endl;
        for(pii node: g[v]){
            int u,w; 
            tie(w,u)=node;
            if(dist[u]>w+d){
                dist[u]=w+d;
                q.push({dist[u],u});
            }
        }
    }
}

void initialize(){
    k=0;
    processed.reset();
    for(int i=0; i<=n+1; i++){
        dist[i]=inf;
        g[i].clear();
    }
}

int main(){_
    while(cin>>n>>x>>m and n+x+m){
        initialize();
        while (m--)
        {
            string a,b; int t; 
            cin>> a >>b >>t;
            if(!d[a]){
                d[a]=++k;
                if(a=="varzea") ini=k;
                else if(a=="alto") fim=k;
            }
            if(!d[b]){ 
                d[b]=++k;
                if(b=="varzea") ini=k;
                else if(b=="alto") fim=k;
            }
            g[d[a]].pb({t,d[b]});
        }
        dijkstra();
        //cout<<"end\n";
        int tempo= (x>30? 1070: 1050);
        /*cout<< fim<<endl;
        cout<< ini<<endl;
        cout<< dist[fim]<<endl;*/
        tempo+= dist[fim];
        cout<< tempo/60<<':'<<tempo%60<<'\n';
        cout<< (x>30? "Ira se atrasar\n": "Nao ira se atrasar\n");
    }
    return 0;
}