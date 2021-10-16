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

struct par{
    int poder;
    string nome;
};

bool cmp(par a, par b){
    return a.poder<b.poder;
}

int n,q,seted[maxn];
vector<par> v;
vector<string> rep[maxn];
map<string,int> m;
set<int> c;
int main(){_
    cin>>n>>q;
    while(n--){
        string s; int x; cin>>s>>x;
        //cout<<s<<' '<<x<<' ';
        if(c.count(x)){
            rep[x].pb(s);
        }
        c.insert(x);
        v.pb({x,s});
    }
    //cout<<"\nFim Entrada\n";
    sort(all(v),cmp);
    for(int i=0; i<sz(v); i++){
        //if(seted[v[i].fs]) continue;
        m[v[i].nome]=i;
        //cout<<v[i].nome<<' ';
        //seted[v[i].fs]=1;
        //cout<<"rep: ";
        for(auto s: rep[v[i].poder]){
            //cout<<s<<' ';
            m[s]=i;
        }
        //cout<<'\n';
        i+= sz(rep[v[i].poder]); 
    }
    while(q--){
        string s; cin>>s;
        cout<< (m[s]>0? m[s]: 0)<<'\n';
    }
	return 0;
}