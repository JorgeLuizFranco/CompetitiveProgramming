#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define str(x) to_string(x)
#define ll long long
using namespace std;

ll n,x,y,ans;

int main(){_
    int t; cin>>t;
    while (t--)
    {
        cin>>x>>y;
        n= max(x,y);
        ll a= n*n -(n-1);
        if(x==y){
            ans= a;
        }
        else if(n%2==0){
            if(x>y){
                ans= a+(n-y);
            } 
            else{
                ans= a-(n-x);
            }
        }
        else{
            if(x>y){
                ans= a-(n-y);
            } 
            else{
                ans= a+(n-x);
            }
        }
        cout<< ans<<'\n';
    }
    return 0;
}