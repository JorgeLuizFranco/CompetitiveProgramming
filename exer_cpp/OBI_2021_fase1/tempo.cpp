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

int n,tempo[200],tempo_global,v[maxn],tempo_total[maxn];
set<int> amigos;

int main(){_
	cin>>n;
    12 horas - 13 horas; +1
    while(n--){
        char r; int x;
        cin>>r>>x;
        if(r!='T'){
            amigos.insert(x);
            tempo_global++;
            if(r=='R'){
                amigos[x]=tempo_global;
            } 
            else /* E */ {
                c.erase(x);
            }
        }
        else{
            tempo_global+=x;
        }
    }
    for(int x: c){
        tempo[x]=-1;
    }
    for(int x: amigos){
        cout<< x<<' '<<tempo[x]-1<<'\n';
    }
	return 0;
}