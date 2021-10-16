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

int main(){_
	int a,b;
    cin>>a>>b;
    for(int i=(-1*(int)1e6)+1; i<(int)1e6+10; i++){
        vector<int> v({a,b,i});
        sort(all(v));
        if(v[1]==(a+b+i)/3){
            cout<<i<<'\n';
            return 0;
        }
    }
    for(int i=(-1*(int)1e9)+1; i<(-1*(int)1e6)+20; i++){
        vector<int> v({a,b,i});
        sort(all(v));
        if(v[1]==(a+b+i)/3){
            cout<<i<<'\n';
            return 0;
        }
    }
    for(int i=((int)1e6)+1; i<(-1*(int)1e8)+200; i++){
        vector<int> v({a,b,i});
        sort(all(v));
        if(v[1]==(a+b+i)/3){
            cout<<i<<'\n';
            return 0;
        }
    }
	return 0;
}