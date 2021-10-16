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

int visited[maxn];

int main(){_
	int n,m,ans=0;
    cin>>n>>m;
    vector<int> v;
    v.pb(n);
    for(int i=0; i<sz(v); i++){
        int no=v[i];
        //cout<<no<<endl;
        if(no==m) break;
        if(no*2<maxn and !visited[no*2]){
            v.pb(no*2);
            visited[no*2]=visited[no]+1;
        }
        if(no-1>0 and !visited[no-1]){
            visited[no-1]=visited[no]+1;
            v.pb(no-1);
        }
    }
    cout<<visited[m];
	return 0;
}