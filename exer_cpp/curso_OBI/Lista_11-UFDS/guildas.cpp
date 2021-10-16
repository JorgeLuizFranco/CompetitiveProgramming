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

int n,m,parent[maxn],power[maxn];

int findx(int x){
    if(x==parent[x]) return x;
    return parent[x]=findx(parent[x]);
}

void join(int x, int y){
    if(y==1){
        swap(x,y);
        //cout<<"opa\n";
    }
    parent[y]=x;
    power[x]+=power[y];
}

int main(){_
	while(cin>>n>>m and n+m){
        int ans=0;
        for(int i=1; i<=n; i++){
            parent[i]=i;
            cin>>power[i];
        }
        while(m--){
            int a,b,q;
            cin>>q>>a>>b;
            if(q==1){
                //cout<<a<<' '<<b<<endl;;
                join(findx(a),findx(b));
                //cout<<findx(a)<<' '<<findx(b)<<endl;
            }
            else{
                if(findx(a)==1){
                    /*cout<<"OPA\n"<<findx(a)<<endl;
                    cout<<power[findx(a)]<<' '<<power[findx(b)]<<endl<<endl;*/
                    if(power[findx(a)]>power[findx(b)]) ++ans;
                }
                else if(findx(b)==1){
                    if(power[findx(a)]<power[findx(b)]) ++ans;
                }
            }
        }
        cout<<ans<<'\n';
    }
	return 0;
}