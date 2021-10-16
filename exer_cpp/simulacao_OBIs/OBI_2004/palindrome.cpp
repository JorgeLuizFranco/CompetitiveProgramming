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

int n,memo[maxn],is_palindrome[maxn][maxn],t;
char s[maxn];

int is_palindromic(int j, int i){
    if(j>i) return 1;
    if(j==i) return is_palindrome[j][i]=1;
    if(~is_palindrome[j][i]) return is_palindrome[j][i];
    return is_palindrome[j][i]= (s[j]==s[i] and is_palindromic(j+1,i-1));
}

int dp(int i){
    if(i<1) return 0;
    if(~memo[i]) return memo[i];
    int ans=inf;
    for(int j=i; j>=1; j--){
        if(is_palindromic(j,i))
            ans=min(1+dp(j-1),ans);
    }
    return memo[i]=ans;
}

int main(){_
	while(cin>>n and n){
        memset(memo,-1,sizeof(memo));
        memset(is_palindrome,-1,sizeof(is_palindrome));
        for(int i=1; i<=n; i++){
            cin>>s[i];
        }
        cout<<"Teste "<<++t<<'\n'<<dp(n)<<"\n\n";
    }
	return 0;
}