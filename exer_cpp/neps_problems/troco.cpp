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
#define maxn (2*(int)1e3+2)
#define inf 0x3f3f3f3f
using namespace std;

int m,v,dp[2][maxn*100],w[maxn];

/*int dp(i,j){
    dp(i,j)=dp(i-1,j) or dp(i-1,j-w[i]);
}*/
/* O(m*v)=> O(2*m)= O(m)*/
int main(){
	cin>>v>>m;
    for(int i=1; i<=m; i++){
        cin>>w[i];
        //cout<<w[i]<<' ';
    }
    //cout<<endl;
    dp[0][0]=1;
    for(int i=1; i<=m; i++){                                        
        //cout<<"ou\n";
        for(int j=0; j<=v; j++){
            int k= (i&1);
            if(j<w[i]){
                dp[k][j]= dp[!k][j];
            }
            else{
                dp[k][j]= (dp[!k][j] || dp[!k][j-w[i]]);
            }
        }
    }
    //  for(int i=1; i<=m; i++){
    //     for(int j=1; j<=v; j++){
    //         printf("dp[%d][%d] = %d\n", i, j, dp[i][j]);
    //     }
    // }

    printf("%s\n", (dp[m&1][v]) ? "S" : "N");
	return 0;
}