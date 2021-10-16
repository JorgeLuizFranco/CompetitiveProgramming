#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0)

using namespace std;

map<int,int> d;

int main(){
    int n; cin>>n;
    while (n--){
        int x; cin>>x;
        if(d.count(x))
            d[x]++;
        else
            d[x]=1;
    }
    int mkey,maior=0;
    for(auto i : d){
        if(i.second > maior){
            maior=i.second;
            mkey= i.first;
        }
    }
    cout<< mkey;
    return 0;
}