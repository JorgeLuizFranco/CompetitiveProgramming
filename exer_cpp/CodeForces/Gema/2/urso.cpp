#include <bits/stdc++.h>

using namespace std;

double a,b;

int main(){
    cin>> a >>b;
    int res= log(b/a)/log(1.5);
    cout<< ++res << '\n';
}