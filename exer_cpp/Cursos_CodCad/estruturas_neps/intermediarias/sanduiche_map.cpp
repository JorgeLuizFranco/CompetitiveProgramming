#include <bits/stdc++.h>

using namespace std;

map<int,int> marc;

int psa[100000*10],n,d,ans;

int main(){
    cin>>n>>d;
    for(int i=1; i<=n; i++){
        cin>>psa[i];
        psa[i]+=psa[i-1];
    }
    marc[0]=1;
    for(int i=1; i<=n; i++){
        if(marc[psa[i]-d])  ++ans;
        marc[psa[i]]=1;
    }
    marc[0]=0;
    for(int i=1; i<=n; i++){
        marc[psa[i]]=0; 
    }
    for(int i=1; i<n; i++){
        marc[psa[i]]=1;
        if(marc[psa[i]+d-psa[n]]) ++ans;
    }
    cout<<ans<<'\n';
    return 0;
}