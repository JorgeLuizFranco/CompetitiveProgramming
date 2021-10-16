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

int n,t;

int main(){_
	cin>>n;
    while(n--){
        cout<<"Teste "<<++t<<'\n';
        vector<int> v;
        set<int> s;
        for(int i=1; i<=5; i++){
            int x; cin>>x; v.pb(x); s.insert(x);
        }
        sort(all(v));
        int b=1;
        for(int i=1; i<5; i++){
            if(v[0]+i!=v[i]){
                b=0;
            }
        }
        if(b){
            cout<<v[0]+200; continue;
        }
        else if(sz(s)==2){
            if(count(all(v),v[0])==4 or count(all(v),v[4])==4){
                cout<< (180+(count(all(v),v[0])>1? v[0]: v[4]));
            }
            else{
                cout<< (160+(count(all(v),v[0])==3? v[0]: v[4]));
            }
        }
        else if(sz(s)==3){
            int i=-1; vector<int> vec(3);
            for(auto x: s) vec[++i]=x;
            for(i=0; i<3; i++){
                if(count(all(v),vec[i])==3){
                    cout<< 140+vec[i]<<'\n';
                    break;
                }
            }
            if(i<3) continue;
            if(count(all(v),vec[0])==count(all(v),vec[1])){
                cout<< 3*max(vec[0],vec[1])+2*min(vec[0],vec[1])+20;
            }
            else if(count(all(v),vec[0])==count(all(v),vec[2])){
                cout<< 3*max(vec[0],vec[2])+2*min(vec[0],vec[2])+20;
            }
            else{
                cout<< 3*max(vec[1],vec[2])+2*min(vec[1],vec[2])+20;
            }
        }
        else if(sz(s)==4){
            for(int i: v){
                if(count(all(v),i)==2){
                    cout<< i; break;
                }
            }
        }
        else{
            cout<<0;
        }
        cout<<"\n\n";
    }
	return 0;
}