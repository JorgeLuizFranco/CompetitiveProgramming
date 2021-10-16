#include <bits/stdc++.h>

using namespace std;

int n,m,t,a,b;

vector<vector<int>> v(100000);

int main(){
    cin>>n >>m;
    for (int i = 0; i < m; i++)
    {
       cin>> t >> a >>b;
       if(t==1){
           v[a].push_back(b);
           v[b].push_back(a);
       } 
       else{
           if(count(v[a].begin(),v[a].end(),b)){
               cout<< 1 << '\n';
           }
           else{
               cout<< 0 << '\n';
           }
       }
    }
    return 0;
}


