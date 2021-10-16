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

int v[maxn*10],n,psa[maxn*10],d;
ll ans;
int main(){
    cin>>n>>d;
    for(int i=1; i<=n; i++){
        cin>>v[i];
        //cout<< v[i]<<' ';
        psa[i]=psa[i-1]+v[i];
    }
    
    for(int j=1; j<=n; j++){
        int l=0,r=j,md;
        //cout<<"busca: \n";
        while(l<=r){
            md=(l+r)/2;
            //printf("l = %d r = %d md = %d\n", l, r, md);
            if(psa[md]==psa[j]-d){
                //cout<<"contou "<<md<<' '<<j<<endl;
                ++ans;
                break;
            }
            else if(psa[md]<psa[j]-d) l=md+1;
            else r=md-1; //psa[md]>psa[j]-d
        }
    }
    for(int j=2; j<=n; j++){
        int l=1,r=j,md,s=d-psa[n];
        //cout<<"busca: \n";
        while(l<=r){
            md=(l+r)/2;
            //printf("l = %d r = %d md = %d\n", l, r, md);
            if(psa[md]==psa[j-1]+s){
                //cout<<"contou"<<md<<' '<<j<<endl;
                ++ans;
                break;
            }
            else if(psa[md]<psa[j-1]+s) l=md+1;
            else r=md-1; //psa[md]>psa[j]-d
        }
    }
    cout<<ans<<'\n';
	return 0;
}