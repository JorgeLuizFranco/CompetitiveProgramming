#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); 

using namespace std;

char op;
double a,b;

int main(){_
    cin>> op;
    cin>> a>> b;
    printf("%.2f",(op=='M'? a*b : a/b));
    return 0;
}