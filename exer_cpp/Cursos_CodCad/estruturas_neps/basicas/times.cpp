#include <bits/stdc++.h>

using namespace std;

vector<string> s;

vector<pair<int,string>> v;
int n,t,j=0,a;
vector<vector<string>> times;
string b;
int main(){
    cin>> n >> t;
    for (int i = 0; i < n; i++)
    {
        cin>> b;
        cin>> a;
        v.push_back({a,b});
    }
    for (int i = 0; i < t; i++)
    {
        times.push_back(s);
    }
    
    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++)
    {
        if(j==t){
            j=0;
        }
        times[j].push_back(v.back().second);
        v.pop_back();
        j++;
    }
    j=1;
    for(auto i: times){
        sort(i.begin(),i.end());
        cout<<  "Time " <<  j << '\n';
        for(string str: i){
            cout<< str << '\n';
        }
        j++; 
        cout<< '\n';
    }
    return 0;
}