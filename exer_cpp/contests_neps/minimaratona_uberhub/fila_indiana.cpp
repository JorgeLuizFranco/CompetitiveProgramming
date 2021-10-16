#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define sc second

using namespace std;

int n,x,y;
string z;
vector<pair<pair<int,int>,string>> v;

int main(){_
    cin>>n;
    while (n--)
    {
        cin>>x>>y>>z;
        v.pb({{x,y},z});
    }
    sort(v.begin(),v.end());
    for(auto x: v){
        cout<< x.sc<< '\n';
    }
    return 0;
}