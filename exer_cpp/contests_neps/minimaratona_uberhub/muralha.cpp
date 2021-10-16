#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define sc second

using namespace std;

int x,y,cont;

int main(){_
    cin>>x>>y;
    while (y--)
    {
        int a; cin>>a;
        if(a>x) cont++;
    }
    cout<< cont<<'\n';
    return 0;
}