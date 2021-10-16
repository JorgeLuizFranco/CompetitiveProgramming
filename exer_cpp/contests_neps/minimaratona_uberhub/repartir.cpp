#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define sc second

using namespace std;

int ans=-1,n,v[1<<20],psa[1<<20];

int main(){_
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>> v[i];
        psa[i]=psa[i-1]+v[i];
    }
    for(int i=1; i<=n; i++){
        if(2*psa[i]-psa[n]==0){
            ans=i; break;
        }
    }
    cout<< ans;
    return 0;
}