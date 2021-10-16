#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define pq priority_queue
#define sc second
#define ub upper_bound
#define print(_x) for(int wx=0; wx<sz(_x); wx++) cout<< x[wx]<< ' ';
#define lb lower_bound
#define ll long long
#define str(_x) to_string(_x)
#define sz(_x) (int)_x.size()
#define all(_x) _x.begin(),_x.end()
#define iii tuple<int,int,int>
#define pii pair<int,int>
#define maxn 6*(int)1e5
#define inf 0x3f3f3f3f
using namespace std;


//map<int,int> m;
ll k,ans,psa[maxn];
int n,x;

int main(){
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        cin>> psa[i];
        psa[i]+=psa[i-1];
        //cout<< psa[i]<<' ';
    }
    //cout<<endl;
    for(int i=1; i<=n; i++){ // psa[i]-psa[j]==k => psa[i]==k+psa[j];
        //cout<<ans<<'\n';
        //cout<<"psa["<<i<<"] :"<<psa[i]<<' '<<psa[i]-k<<endl;
        //cout<< "ub: "<< (ub(psa,psa+i,psa[i]-k)-psa) <<" lb: "<< (lb(psa,psa+i,psa[i]-k)-psa) <<endl;
        ans+= (ub(psa,psa+i,psa[i]-k)-psa)-(lb(psa,psa+i,psa[i]-k)-psa);
    }
    cout<<ans<<'\n';
    return 0;
}