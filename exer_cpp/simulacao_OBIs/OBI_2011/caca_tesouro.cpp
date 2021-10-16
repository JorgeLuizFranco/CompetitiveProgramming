#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define pq priority_queue
#define sc second
#define ub upper_bound
#define print(x) for(pii u: x) cout<< u.fs<<u.sc<< ' ';
#define lb lower_bound
#define ll long long
#define str(x) to_string(x)
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define maxn 2*(int)1e5
#define inf 0x3f3f3f3f
using namespace std;

int n,k,x,y,d,visited[102][102],ocurr[102][102];

set<pii> pos;

void bfs(pii ini){
    queue<pair<int,pii>> q;
    q.push({0,ini});
    while(!q.empty()){
        auto[i,j]=q.front().sc;
        int dist=q.front().fs; q.pop();
        if(dist==d){
            ocurr[i][j]++;
            pos.insert({i,j}); continue;
        }
        for(int a: {-1,1}){
            if(i+a and j and i+a<=n and j<=n and !visited[i+a][j]){
                //cout<< cont+1 << ' '<< i+x << ' '<< j<< endl;
                q.push({dist+1,{i+a,j}});
                visited[i+a][j]=1;
            }
            if(i and j+a and i<=n and j+a<=n and !visited[i][j+a]){
                //cout<< cont+1 << ' '<< i << ' '<< j+x<< endl;
                q.push({dist+1,{i,j+a}});
                visited[i][j+a]=1;
            }
        }
    }
}

int main(){_
	cin>>n>>k;
    int m=k;
    while(m--){
        cin>>x>>y>>d;
        //cout<<x<<y<<d<<endl;
        //print(pos);
        bfs({x+1,y+1});
        memset(visited,0,sizeof(visited));
    }
    int maior=0;
    vector<pair<int,pii>> v;
    for(auto [i,j]: pos){
        v.pb({ocurr[i][j],{i,j}});
    }
    sort(all(v),greater<pair<int,pii>>());
    /*for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << ocurr[i][j] << " ";
        }
        cout << endl;
    }*/
    if(v[0].fs==k and v[1].fs!=v[0].fs){
        cout<<v[0].sc.fs-1<<' '<<v[0].sc.sc-1;
    }
    else{
        cout<<-1<<' '<<-1;
    }
	return 0;
}