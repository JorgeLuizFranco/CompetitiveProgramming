#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define sc second
#define str(x) to_string(x)
#define pii pair<int,int>
#define maxn 2*(int)1e5
#define inf 0x3f3f3f3f
using namespace std;

int n,a,b,t;

int main(){
    while (cin>>n and n)
    {
        cout<< "Teste "<<++t<<'\n';
        string p1,p2;
        cin>> p1 >>p2;
        while (n--)
        {
            cin>>a >>b;
            cout<< ((a-b)%2? p2: p1)<< '\n';
        }
        cout<< '\n';
    }
}