#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
using namespace std;

int t,n,m;

int main(){_
    cin>>t;
    while(t--){
        cin>> n >>m;
        if((n-2)%3==0){
            n= (n-2)/3;
        }
        else{
            n=(n-2)/3+1;
        }
        if((m-2)%3==0){
            m= (m-2)/3;
        }
        else{
            m=(m-2)/3+1;
        }
        cout<< m*n<< '\n';
    }
    return 0;
}