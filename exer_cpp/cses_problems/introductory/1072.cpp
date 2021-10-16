#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define str(x) to_string(x)
#define ll long long
using namespace std;

ll n,x,y,ans;

int main(){_
    cin>>n;
    for(ll k=1; k<=n; k++){
        cout<< (k*k)*(k*k-1)/2- 4*(k-1)*(k-2)<<'\n';
    }
    return 0;
}