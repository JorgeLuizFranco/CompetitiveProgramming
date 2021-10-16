#include <bits/stdc++.h>

using namespace std;

int p,y;

int main(){
    cin>> p;
    if(p!=2){
        cout<< 1 <<endl;
        y= (p-1)/2;
        cout<< y+1 << ' '<<y;
    }
    else{
        cout<< 0;
    }
    cout<< endl;
    return 0;
}