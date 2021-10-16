#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;


int main(){_
    int n,d,a;
    cin>> n >> d >> a;
    if(d>=a){
        cout<< (d-a);
    }
    else{
        cout<< n-a+d;
    }
    return 0;
}