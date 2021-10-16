#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define pq priority_queue
#define sc second
#define ub upper_bound
#define print(x) for(int wx=0; wx<sz(x); wx++) cout<< x[wx]<< ' ';
#define lb lower_bound
#define ll long long
#define str(x) to_string(x)
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define iii tuple<int,int,int>
#define pii pair<int,int>
#define maxn 2*(int)1e5
#define inf 0x3f3f3f3f
using namespace std;

struct edge{
    int u;
    int v;
    int w;
    int rod=0;
};

int n,f,r,ans,parent[maxn];

vector<edge> g;

int cmp(edge a, edge b){
    if(a.rod and b.rod) return a.w<=b.w;
    if(a.rod) return 0;
    if(b.rod) return 1;
    return a.w<=b.w;
}

int findx(int x){
    if(x==parent[x]) return x;
    return parent[x]=findx(parent[x]);
}

void join(int x, int y){
    parent[y]=x;
}

int main(){_
	cin>>n>>f>>r;
    for(int i=1; i<=n; i++){
        parent[i]=i;
    }
    while(f--){
        int x,y,p;
        cin>>x>>y>>p;
        g.pb({x,y,p,0});
    }
    while(r--){
        int x,y,p;
        cin>>x>>y>>p;
        g.pb({x,y,p,1});
    }
    sort(all(g),cmp);
    for(auto[u,v,w,trash]: g){
        //cout<< u<<' '<<v<<' '<<w<<' '<<trash<<endl;
        //cout<<"find: "<<findx(u)<<' '<<findx(v)<<endl;
        if(findx(u)==findx(v)){
            //cout<<"opa\n";
            continue;
        }
        join(findx(u),findx(v));
        ans+=w;
    }
    cout<<ans<<'\n';
	return 0;
}