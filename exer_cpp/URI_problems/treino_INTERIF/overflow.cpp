#include <bits/stdc++.h>
#define Pi 3.141592653589793
#define e 2.7182818284590452354
#define _ ios_base::sync_with_stdio(0);
using namespace std;

int a,n;
double long x;

int main(){_
    cin>> a;
    x= ceil((log10(2*Pi*a))/2 + a*(log10(a/e)));
    n= x;
    cout<< n << '\n';
    return 0;
}