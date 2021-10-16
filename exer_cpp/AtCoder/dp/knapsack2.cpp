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

int v[102];
ll memo[102][maxn],w[102];
int n,W,res=-inf;
////////////////////////// Memo[x][sum]= [usando os itens de x até n][formando o valor sum]= qual o menor peso da minha mochila?
ll dp(int x, int sum){
    //cout<<x<<' '<<k<<endl;
    if(x>n) {
        //res=max(sum,res);
        if(sum==0)
            return 0;
        else
            return inf;
    }
    if(memo[x][sum]!=-1) return memo[x][sum];
    ll ans=dp(x+1,sum);
    //if(w[x]+ans<=W){
    ans=min(ans,dp(x+1,sum-v[x])+w[x]);
    //}
    return memo[x][sum]=ans; // memo[x][v[1]+[v2]]=v[1]+v[2]+v[3]+v[4]
}

int main(){_
    cin>>n>>W;
    memset(memo,-1,sizeof(memo));
    int s=0;
    for(int i=1; i<=n; i++){
        cin>>w[i]>>v[i];
        s+=v[i];
    }
    //dp(1,s);
    for(int i=s; i>=1; i--){
        if(dp(1,i)<=W){
            cout<<i;
            break;
        }
    }
    //cout<< res;
	return 0;
}