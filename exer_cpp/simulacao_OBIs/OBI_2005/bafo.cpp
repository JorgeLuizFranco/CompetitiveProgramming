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

int r,t;

int main(){_
	while(cin>>r and r){
        int aldo=0,beto=0;
        while(r--){
            int a,b; cin>>a>>b;
            aldo+=a ; beto+=b;
        }
        cout<<"Teste "<<++t<<'\n';
        cout<<(aldo>beto? "Aldo\n\n" : "Beto\n\n");
    }
	return 0;
}