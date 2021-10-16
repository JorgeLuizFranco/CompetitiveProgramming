#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define str(x) to_string(x)
#define ll long long
using namespace std;

int n;
vector<int> v;


int main(){_
    cin>>n;
    int i=1,j=2;
    while (j<=n)
    {
        v.push_back(j);
        j+=2;
    }
    
    while (i<=n)
    {
        v.push_back(i);
        i+=2;
    }
    if(n<=3 and n>1){
        cout<< "NO SOLUTION";
    }
    else{
        for(int x: v){
            cout<< x<< ' ';
        }
    }
    return 0;
}