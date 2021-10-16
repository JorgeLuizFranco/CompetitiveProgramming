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

//vector<int> ga[maxn],gb[maxn];

int n,s,visited[maxn],a[maxn],b[maxn];


int main(){_
    cin>>n>>s;
	for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    for(int i=1; i<=n ; i++){
        cin>>b[i];
    }
    if(a[1]){
        if(a[s]){
            cout<<"YES\n";
        }
        else{
            //cout<<"aqui\n";
            for(int i=n; i>s; i--){
                if(a[i] and b[i] and b[s]){
                    cout<<"YES\n";
                    return 0;
                }
            }
            cout<<"NO\n";
        }
    }
    else{
        cout<<"NO\n";
    }
	return 0;
}