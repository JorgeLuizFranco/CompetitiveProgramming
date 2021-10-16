#include <bits/stdc++.h>

using namespace std;

set<int> c;
int n,m,x;
int main(){
    cin>> n;
    cin>>m;
    while(m--){
        cin>>x;
        c.insert(x);
    }
    cout<< n-c.size();
    return 0;
}