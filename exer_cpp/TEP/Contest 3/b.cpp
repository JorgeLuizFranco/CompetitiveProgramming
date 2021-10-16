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
#define maxn 2*(int)1e2
#define inf 0x3f3f3f3f
using namespace std;

int n,m;
char v[maxn][maxn],check[maxn];

int main(){_
	cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>v[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        int j=1;
        while(j<=m and v[i][j]=='.'){
            //cout<<v[i][j]<<' ';
            //cout<<j<<' ';
            ++j;
        }
        //cout<<endl;
        if(j>m){
            check[i]=1;
            for(j=1; j<=m; j++)
                v[i][j]='\0';
        } 
    }
    for(int j=1; j<=m; j++){
        int i=1;
        while(i<=n and (v[i][j]=='.' or v[i][j]=='\0')){
            ++i;
        }
        if(i>n){
            //cout<<"ou\n";
            for(i=1; i<=n; i++)
                v[i][j]='\0';
        } 
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(v[i][j]!='\0')
                cout<<v[i][j];
        }
        if(!check[i]) cout<<'\n';
    }
	return 0;
}