#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define sc second

using namespace std;

int n,x,y,cont;

int main(){_
    cin>>n;
    while (n--)
    {
        cin>>x;
        if(!x) cont++;
    }
    cout<< cont<<'\n';
    return 0;
}