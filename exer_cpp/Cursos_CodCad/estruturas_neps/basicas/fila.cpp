#include <bits/stdc++.h>

using namespace std;

int n,m,x;

vector<int> v1,v2;

int main(){    
    string res;
    cin>>n;
    while(n--){
        cin>>x;
        v1.push_back(x);
    }
    cin>> m;
    while(m--){
        cin>>x;
        v2.push_back(x);
    }
    sort(v2.begin(),v2.end());
    for(int y: v1){
        if(!binary_search(v2.begin(),v2.end(),y)){
            res+= to_string(y)+" ";
        }
    }
    res.pop_back();
    cout<< res;
    return 0;
}