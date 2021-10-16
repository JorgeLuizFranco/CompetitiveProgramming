#include <bits/stdc++.h>

using namespace std;

int main(){
    int c,a;
    cin>> c >>a;
    c--;
    if(a>c){
        if(a%c==0){
            cout<< a/c;
        }
        else{
            cout<< (a/c+1);
        }
    }
    else{
        cout<< 1;
    }
    return 0;
}