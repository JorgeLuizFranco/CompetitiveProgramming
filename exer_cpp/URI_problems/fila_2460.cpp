#include <bits/stdc++.h>

using namespace std;

int V[50000];
set<int> c;
string s;
int n,m,x;
int main(){
    cin>> n;
    for (int i = 0; i < n; i++)
    {
        cin>> V[i];
    }
    cin>> m;
    while(m--){
        cin>> x;
        c.insert(x);
    }
    int cont=0;
    for (int i = 0; i < n; i++)
    {
        if(!(c.count(V[i]))){
            s+= to_string(V[i])+" ";
        }
    }
    cout<< s.substr(0,s.size()-1);
    cout<< '\n';
    return 0;
}