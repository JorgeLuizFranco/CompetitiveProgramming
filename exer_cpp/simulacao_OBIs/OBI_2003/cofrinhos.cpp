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

int n,m,t,s1,s2;


int main(){
    while (cin>>n and n)
    {
        cout<< "Teste "<<++t<<'\n';
        while (n--)
        {
            int j,z;
            cin>>j>>z;
            s1+=j,s2+=z;
            cout<< (s1-s2)<<'\n';
        }
        s1=0,s2=0;
        cout<<'\n';
    }
    return 0;
}