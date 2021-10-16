#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0)
using namespace std;

set<string> c;

int main(){
    int n; cin>>n;
    while(n!=0){
        while(n--){
            string s; cin>>s;
            sort(s.begin(),s.end());
            c.insert(s);
        }
        cout<< c.size() << '\n';
        c.clear();
        cin>>n;
    }
}