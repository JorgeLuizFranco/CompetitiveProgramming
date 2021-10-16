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

vector<pii> g1[maxn],g2[maxn];
int dist1[maxn],dist2[maxn],n,c,s,b,bino,fim,meliante[maxn],ans;

void dijkstra1(){
	dist1[fim]=0;
	pq<pii,vector<pii>,greater<pii>> q;
	q.push({0,fim});
	//cout<< "Grafo 1 \n";
	while(!q.empty()){
		auto [d,v]=q.top(); q.pop();
		//cout<< v<< ' '<<d<<endl;
		//cout<< dist1[v]<<'\n';
		if(dist1[v]<d) continue;
		for(auto[w,u]: g1[v]){
			//cout<< w << ' '<<u<<endl;
			if(dist1[u]>d+w){
				dist1[u]=d+w;
				q.push({dist1[u],u});
			}
		}
	}
}

void dijkstra2(){
	dist2[fim]=0;
	pq<pii,vector<pii>,greater<pii>> q;
	q.push({0,fim});
	//cout<< "Grafo 2 \n";
	while(!q.empty()){
		auto [d,v]=q.top(); q.pop();
		//cout<< v<< ' '<<d<< '\n';
		//cout<< dist2[v]<<'\n';
		if(dist2[v]<d) continue;
		if(meliante[v]){
			if(dist2[v]<=dist1[bino]) ans+=meliante[v];
		}
		for(auto[w,u]: g2[v]){
			if(dist2[u]>d+w){
				dist2[u]=d+w;
				q.push({dist2[u],u});
			}
		}
	}
}

int main(){_
	cin>>n>>c>>s>>b;
	while(c--){
		int a,b,d;
		cin>>a>>b>>d;
		g1[a].pb({d,b});
		g1[b].pb({d,a});
		g2[a].pb({d,b});
		g2[b].pb({d,a});
	}
	while(s--){
		int a,b,d;
		cin>>a>>b>>d;
		g2[a].pb({d,b});
		g2[b].pb({d,a});
	}
	for(int i=1; i<=b; i++){
		int k; cin>>k;
		if(meliante[k]) meliante[k]++;
		else meliante[k]=1;
	}
	memset(dist1,inf,sizeof(dist1));
	cin>>bino>>fim;
	dijkstra1();
	memset(dist2,inf,sizeof(dist2));
	dijkstra2();
	cout<<ans<<'\n';
	return 0;
}