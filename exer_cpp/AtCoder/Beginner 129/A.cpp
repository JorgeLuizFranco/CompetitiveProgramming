#include <bits/stdc++.h>

using namespace std;

int a,b,c;
int main(){
    cin>> a >>b >>c;
    if(a>b and a>c){
        cout<< b+c;
    }
    else{
        cout<< a+min(b,c);
    }
    return 0;
}