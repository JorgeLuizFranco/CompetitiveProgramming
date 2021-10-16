#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define ll long long
using namespace std;

ll n,moves,curr,pre;

int main(){_
    cin>>n; n-=1;
    cin>>pre;
    while(n--){
        cin>>curr;
        if(pre>curr){
            moves+= pre-curr;
            curr=pre;
        }
        pre=curr;
    }
    cout<<moves;
    return 0;
}