#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define cint(x) x-'0'
#define ichar(x) x+'0'
using namespace std;

int n,d;
string digs;

int main(){_
    while(cin>>n>>d and n+d){
        stack<char> p;
        cin>> digs;
        int total=n-d;
        for(int i=0; i<n;i++){
            while (!p.empty() and p.top()<digs[i] and d)
            {
               p.pop();
               d--;
            }
            p.push(digs[i]);
        }
        string res;
        while(!p.empty()){
            res.push_back(p.top()); p.pop();
        }
        reverse(res.begin(),res.end());
        //cout<< n<< ' '<<d << endl;
        res.resize(total);
        cout<< res;
        cout<< '\n';
    }//d=2 4,7,6,8
    
    return 0;
}