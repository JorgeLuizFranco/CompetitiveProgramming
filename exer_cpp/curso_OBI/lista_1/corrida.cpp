#include <bits/stdc++.h>
#define _ ios_base::synch_with_stdio(0)

using namespace std;
vector<int> v;
map<int,int> d;
int main(){
    int n,m;
    cin>> n >> m;
    for(int i=0;i<n;i++){
        int s=0;
        for (int j = 0; j < m; j++)
        {
            int t; 
            cin>>t;
            s+=t;
        }
        v.push_back(s);
        d[s]=i+1;
    }
    sort(v.begin(),v.end());
    for(int i=0; i<3;i++){
        cout<< d[v[i]] << endl;
    }
    return 0;
}