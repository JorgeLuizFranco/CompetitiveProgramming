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
#define maxn 2*(int)1e3
#define inf 0x3f3f3f3f
using namespace std;

int n,visited[maxn][maxn],g[maxn][maxn],w[2][maxn][maxn],dist[2][maxn][maxn];

bool possible(int x, int y){
	return (x>=1 and x<=n and y>=1 and y<=n and g[x][y]!=0);
}

int dijkstra(pii beg,int idx){
	pq<pair<int,pii>, vector< pair<int,pii> >, greater<pair<int,pii>>> q;
	//cout<<"w: "<<w[idx][beg.fs][beg.sc]<<endl;
	q.push({ w[idx][beg.fs][beg.sc],beg} );
	while(!q.empty()){
		int d=q.top().fs; auto[i,j]=q.top().sc; q.pop();
		//cout<<i<<' '<<j<<endl;
		if(d>dist[idx][i][j]) continue;
		//cout<<"funciona\n";
		for(auto [x,y]: {pii(0,1),pii(1,0)}){
			if(possible(i+x,j+y) and d+w[idx][i+x][j+y]<dist[idx][i+x][j+y]){
				dist[idx][i+x][j+y]=d+w[idx][i+x][j+y];
				q.push({dist[idx][i+x][j+y],pii(i+x,j+y)});
			}
		}
	}
	//cout<< "ans: "<<dist[idx][n][n]<<endl;
	return dist[idx][n][n];
}	

int main(){_
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>g[i][j];
			dist[0][i][j]=inf;
			dist[1][i][j]=inf;
			int k=g[i][j];
			//cout<<g[i][j]<<' ';
			while(k%2==0 and k){ 
				w[0][i][j]++;
				k/=2;
			}
			//cout<< w[0][i][j]<<' ';
			while(k%5==0 and k){ 
				w[1][i][j]++;
				k/=5;
			}
			//cout<< w[1][i][j]<<" -> ";
		}
		//cout<<'\n';
	}
	//cout<< " PT 2:\n";
	cout<< min(dijkstra(pii(1,1),2%2),dijkstra(pii(1,1),5%2));
	return 0;
}