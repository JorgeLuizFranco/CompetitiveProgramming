#include<bits/stdc++.h>

using namespace std;

int n,p,ans;

int main(){
    cin>>n>>p;
    while(n--){
        int x,y;
        cin>>x>>y;
        if(x+y>=p)++ans;
    }
    cout<<ans;
    return 0;
}