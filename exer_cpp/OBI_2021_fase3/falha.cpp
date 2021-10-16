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
#define maxn (2*(int)1e3+1)
#define inf 0x3f3f3f3f
using namespace std;

string s[maxn];

string lcs(string a, string b)
{
    int m = sz(a);
    int n = sz(b);
    int res = 0;
    int fim;
    int dp[2][n];
    int idx = 0;
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                dp[idx][j] = 0;
            }
            else if (a[i - 1] == b[j - 1]) {
                dp[idx][j] = dp[1 - idx][j - 1] + 1;
                if (dp[idx][j] > res) {
                    res = dp[idx][j];
                    fim = i - 1;
                }
            }
            else {
                dp[idx][j] = 0;
            }
        }
        idx = 1 - idx;
    }
    if (res == 0) {
        return "NO";
    }
    return a.substr(fim - res + 1, res);
}

int memo[maxn][maxn];
unordered_map <string,int> m;

int main(){_
    memset(memo,-1,sizeof(memo));
	int n,ans=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>s[i];
        if(!(m.count(s[i]))) m[s[i]]=i;
    }
    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            if(~memo[m[s[i]]][m[s[j]]]){
                ans+=memo[m[s[i]]][m[s[j]]]; continue;
            } 
            if(~memo[m[s[j]]][m[s[i]]]){
                ans+=memo[m[s[i]]][m[s[j]]]; continue;
            } 
            string comum= lcs(s[i],s[j]);
            //cout<<s[i]<<' '<<s[j]<<"\nLCS: ";
            //cout<<comum<<endl;
            if(s[i]==s[j]){
                ans+=2; continue;
            }
            if(comum==s[i] or comum==s[j]){
                ++ans;
                memo[m[s[i]]][m[s[j]]]=memo[m[s[j]]][m[s[i]]]=1;
            }
            else{
                memo[m[s[i]]][m[s[j]]]=memo[m[s[j]]][m[s[i]]]=0;
            }
        }
    }
    cout<<ans<<'\n';
	return 0;
}