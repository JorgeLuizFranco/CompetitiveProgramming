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

int psa[11][maxn],n,m,v[maxn],ans[11];

int main(){_
	cin>>n>>m;
    for(int i=1; i<=n; i++){
        cin>>v[i];
        //cout<< v[i]<<' ';
    }
    //cout<<'\n';
    for(int i=1; i<=n; i++){
        for(int j=0; j<10; j++){
            psa[j][i]=psa[j][i-1];
            //cout<<"psa :"<< psa[j][i];
        }
        psa[v[i]][i]+=1;
    }
    int pre=0;
    while(m--){
        int x;
        cin>>x;
        //cout<<x<<' ';
        for(int i=0; i<10; i++){
            if(x>pre)   ans[i]+= (psa[i][x]-psa[i][pre]);
            else        ans[i]+= (psa[i][x-1]-psa[i][pre-1]);
        }
        pre=x;
    }
    for(int i=0; i<10; i++){
        cout<<ans[i]<<' ';
    }
	return 0;
}