#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define sc second
#define str(x) to_string(x)
#define pii pair<int,int>
#define maxn 2*(int)1e5
#define all(x) x.begin(),x.end()
#define inf 0x3f3f3f3f
using namespace std;

int s;


int main(){_
    int t=0;
    while(cin>>s and s){
        vector<int> vx,vy;
        for(int i=1; i<=s; i++){
            int x,y; cin>>x>>y;
            vx.pb(x);
            vy.pb(y);
        }
        sort(all(vx));
        sort(all(vy));
        cout<<"Teste "<<++t<<'\n';
        if(s&1){
            cout<< vx[s/2]<<' '<<vy[s/2]<<"\n\n";
        }
        else{
            cout<< ((vx[s/2]+vx[s/2-1])/2)<<' '<<((vy[s/2]+vy[s/2-1])/2)<<"\n\n";
        }
    }
    return 0;
}