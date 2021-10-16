#include<bits/stdc++.h>

using namespace std;

set<int> c;

int main(){
    int n;
    cin>>n;
    while (n--)
    {
        int x; cin>>x;
        c.insert(x);
    }
    cout<< c.size();
}