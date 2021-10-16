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


int n,m,parent[maxn+2],tot,weight;

int findx(int x){
    if(parent[x]==x) return x;
    return parent[x]=findx(parent[x]);
}

void join(int x, int y){
    parent[x]=y;
}

int main(){
    //cout<<"ou\n";
    while(cin>>m>>n and m+n){
        vector<iii> g;
        for(int i=0; i<m; i++){
            parent[i]=i;
            //cout<<i;
        }
        while(n--){
            int x,y,w;
            //cout<<x<<' '<<y<<endl;
            cin>>x>>y>>w;
            //cout<<x<<' '<<y<<endl;
            g.pb({w,x,y});
            tot+=w;
        }
        //cout<<endl;
        sort(all(g));
        for(auto[w,x,y] : g){
            //cout<<x<<w<<'\n';
            //cout<<x<<' '<<y<<' '<<w<<endl;
            //cout<<findx(x)<<' '<<findx(y)<<endl;
            if(findx(x)==findx(y)) continue;
            join(findx(x),findx(y));
            //cout<<w<<endl;
            weight+=w;
        }
        cout<<tot-weight<<'\n';
	tot=0; weight=0;
    }
    return 0;
}