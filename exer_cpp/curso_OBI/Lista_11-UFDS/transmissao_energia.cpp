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
#define pii pair<int,int>
#define maxn 2*(int)1e5
#define inf 0x3f3f3f3f
using namespace std;

int n,m,parent[maxn],t;

int find(int x){
    if(x==parent[x]) return x;
    return parent[x]=find(parent[x]);
}

void join(int x, int y){
    parent[y]=x;
}

int main(){_
    while(cin>>n>>m and n+m){
        cout<< "Teste "<<++t<<'\n';
        //cout<<"n: "<<n<<" m: "<<m<<endl;
        for(int i=1; i<=n; i++){
            parent[i]=i;
        }
        while(m--){
            int x,y; cin>>x>>y;
            //cout<<x<<' '<<y<<endl;
            join(find(x),find(y));
        }
        int ans=0;
        for(int i=1; i<=n; i++){
            if(find(i)==i) ans++;
        }
        cout<<(ans!=1? "falha\n\n":"normal\n\n");
    }
	return 0;
}