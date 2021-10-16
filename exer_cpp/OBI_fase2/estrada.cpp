#include <bits/stdc++.h>

using namespace std;

int t,n,x1,x2,meio;
float viz1,viz2;

int main(){
    cin>> t;
    cin>>n;
    cin>> x1 >>x2;
    int a1=max(x1,x2);
    int a2=min(x1,x2);
    viz1+= abs((a1-a2)/2.0);
    viz2+= abs((a1-a2)/2.0);
    viz1+= t-a1;
    viz2+= a2;
    printf("%.2f",min(viz1,viz2));
    return 0;
}