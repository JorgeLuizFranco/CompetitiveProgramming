#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0)

using namespace std;

bool compare(int a, int b){
    return a>b;
}

int main(){
    int n; cin>>n;
    vector<int> vp,vi;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(x%2==0)
            vp.emplace_back(x);
        else   
            vi.emplace_back(x);
    }
    sort(vp.begin(),vp.end());
    sort(vi.begin(),vi.end(),compare);
    for(int i: vp)
        cout<< i << '\n';
    for(int i: vi)
        cout<< i << '\n';
    return 0;
}