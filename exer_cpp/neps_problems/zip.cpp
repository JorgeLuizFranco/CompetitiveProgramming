#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,L,x,y,C;
    cin>> a >> b;
    if(a==b){
        L= 2*(a+b);
    }
    else if(abs(a-b)==1){
        L= 3*(a+b);
    }
    else{
        L= a+b;
    }
    cin>> x>> y;
    if(x==y){
        C= 2*(x+y);
    }
    else if(abs(x-y)==1){
        C= 3*(x+y);
    }
    else{
        C= x+y;
    }
    if(L==C){
        cout<< "empate";
    }
    else if(L>C){
        cout<< "Lia";
    }
    else{
        cout<< "Carolina";
    }
    return 0;
}