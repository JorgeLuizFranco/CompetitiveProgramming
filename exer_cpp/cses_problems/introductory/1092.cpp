#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define str(x) to_string(x)
#define pb push_back
#define ll long long
#define maxn 2*(int)1e6+10
using namespace std;

ll n,x,y,ans,r,l,v[maxn],s1,s2;
vector<ll> c1,c2;
int main(){_
    cin>>n;
    for(int i=1; i<=n; i++){
        v[i]=i;
    }
    for(int i=n; i>=1; i--){
        if(s1<=s2){
            s1+= v[i];
            c1.pb(v[i]);
        }
        else{
            s2+=v[i];
            c2.pb(v[i]);
        }
    }
    if(s1==s2){
        cout<< "YES\n";
        cout<< c1.size()<<endl;
        for(int x: c1){
            cout<< x << ' ';
        }
        cout<< endl;
        cout<< c2.size()<<endl;
        for(int x: c2){
            cout<< x<< ' ';
        }
    }
    else cout<< "NO\n";
    return 0;
}