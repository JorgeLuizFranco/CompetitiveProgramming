//A. PolandBall and Hypothesis
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
#define maxn 2*(int)1e7
#define inf 0x3f3f3f3f
using namespace std;

int no_prime[maxn];

int main(){_
    int n; cin>>n;
    for (int p = 2; p * p <= 1002; p++)
    {
        if (!(no_prime[p]))
        {
            for (int i = p * p; i <= 999999; i += p)
                no_prime[i] = 1;
        }
    }
    if(n==2 or n==1) cout<<38;
    else if(n%2==0){
        for(int i=3; i<=1002; i++){
            if(no_prime[n*i+1]){
                cout<<i<<'\n'; return 0;
            }
        }
    }
    else cout<<1;
	return 0;
}

