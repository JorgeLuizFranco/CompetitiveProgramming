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

int parent[maxn],n,m,q,level[maxn],compo,sensate[maxn];
map<string,int> d;

int findx(int x){
    if(x==parent[x])  return x;
    return parent[x]=findx(parent[x]);
}

void join(int x, int y){
    if(level[x]<level[y]) swap(x,y);
    parent[y]=x;
    sensate[x]++;
}

int main(){_
    //ofstream myfile;
    //myfile.open ("example.txt");
    cin>>n>>m>>q;
    for(int i=1; i<=n; i++){
        string s; cin>>s;
        d[s]=i;
        parent[i]=i;
        sensate[i]=1;
        cin>>level[i];
    }
    while(m--){
        string s1,s2; cin>>s1>>s2;
        join(findx(d[s1]),findx(d[s2]));
    }
    while(q--){
        string s; cin>>s;
        int x=d[s];
        if(sensate[findx(x)]==1 or level[x]>=5 or level[findx(x)]<=5){
            //myfile << "S\n";
            cout<<"S\n";
        }
        else{
            //myfile << "N\n";
            cout<<"N\n";
        }
    }
    //myfile.close();
	return 0;
}