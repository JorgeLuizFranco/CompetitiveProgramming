#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

char op;
int a,b,n;

long int c;

int main(){
    cin>>n;
    cin>> a>> op >> b;
    c= (op=='+')? a+b : a*b;    
    cout<< ((c>n)? "OVERFLOW": "OK");
}