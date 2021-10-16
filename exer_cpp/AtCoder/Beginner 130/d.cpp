#include<bits/stdc++.h>

using namespace std;

int n,k,v[(int)1e5+2],ans,sum,lft,rgt;

int main(){
    cin>>n>>k;
    bool is=true;
    for (int i = 1; i <=n; i++)
    {
        cin>> v[i];
        sum+=v[i];
        if(sum>=k and is){
            ans+= n-i+1;
            rgt=i;
            is=false;
        }
    }
    //cout<< sum << endl;
    sum-= v[++lft];
    while (sum>= k and lft<n)
    {
        ans++;
        sum-=v[++lft]; 
    }
    cout<< ans;
    return 0;
}