#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define ll long long
using namespace std;

int v[(int)1e6],ans;

int main(){_
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        int x; cin>>x;
        v[x]++;
    }
    for(int i=1; i<=n; i++){
        if(!v[i]){
            ans=i;
        }
    }
    cout<< ans;
    return 0;
}