#include <bits/stdc++.h>
#define cint(x) x-'0'
using namespace std;

string a,b;
int sa,sb;
int main(){
    cin>> a >>b;
    for(int i=0; i<3; i++){
        sa+= cint(a[i]);
        sb+= cint(b[i]);
    }
    cout<< max(sa,sb);
    return 0;
}