#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
using namespace std;

int c,n,x,y,imaior=-1;
map<int,int> v;
set<int> a;
int main(){_
    cin>> c >>n;
    while(c--){
        cin>> x >>y;
        v[x]=y;
    }
    while (n--)
    {
        cin>> x >>y;
        if(y>v[x]){
            v[x]=y;
            a.insert(x);
        }
    }
    for(int i: a){
        cout<< i<< ' '<<v[i]<< '\n';
    }
    return 0;
}