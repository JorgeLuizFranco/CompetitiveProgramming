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
#define maxn (2*(int)1e5+10)
#define inf (0x3f3f3f3f)
using namespace std;

struct par{
    int w,ind;
};

bool cmp(par a, par b){
    return a.w<b.w;
}

int pre[maxn],suf[maxn],n,w[maxn],mx=inf,idx;
vector<par> v;

int main(){_
	cin>>n;
    for(int i=1; i<=n; i++){
        cin>>w[i];
        //par a; a.ind=i,a.w=w[i];
        //v.pb(a);
        v.pb({w[i],i});
        //cout<< v[i-1].ind<<' '<<v[i-1].w<<endl;
    }
    sort(w+1,w+n+1);
    for(int i=1; i<=n; i++){
        if(i%2) pre[i]=pre[i-1];
        else pre[i]=max(pre[i-2],w[i]-w[i-1]);
    }
    for(int i=n; i>=1; i--){
        if(i%2) suf[i]=suf[i+1];
        else suf[i]=max(suf[i+2],w[i+1]-w[i]);
    }
    sort(all(v),cmp);
    //cout<<"Print vector: \n";
    for(int i=1; i<=n; i++){
        //cout<<"v["<<i<<"] " <<v[i-1].ind<<' '<<v[i-1].w<<endl;
        if(i%2){
            //cout<<mx<<' '<<suf[i+1]<<' '<<pre[i-1]<<'\n';
            if(mx>max(suf[i+1],pre[i-1])){
                mx=max(suf[i+1],pre[i-1]);
                idx=i;
            }
        }
        else{
            int ind_vector=i-1;
            if(mx>max({suf[i+1],pre[i-1],w[i+1]-w[i]})){
                mx=max({suf[i+1],pre[i-1],w[i+1]-w[i]});
                idx=i;
            }
            // if(i==1){
            //     if(mx>max(suf[i+2],v[ind_vector+1].w-v[ind_vector-1].w)){
            //         mx=max( suf[i+2],v[ind_vector+1].w-v[ind_vector-1].w );
            //         idx=i;
            //     }
            // }
            // else if(mx>max( {suf[i+2],pre[i-2],v[ind_vector+1].w-v[ind_vector-1].w} )){
            //     mx=max( {suf[i+2],pre[i-2],v[ind_vector+1].w-v[ind_vector-1].w} );
            //     idx=i;
            // }
        }
    }
    //cout<<idx<<'\n';
    v.erase(v.begin()+idx-1);
    for(int i=0; i<sz(v); i+=2){
        cout<< v[i].ind<< ' '<<v[i+1].ind<<'\n';
    }
	return 0;
}