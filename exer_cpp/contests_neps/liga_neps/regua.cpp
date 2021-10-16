#include <bits/stdc++.h>
#define _ ios_base::synch_with_stdio(0)

using namespace std;

int main(){
    int k,x,y;
    cin>> k;
    cin>> x >> y;
    if(abs(x-y)<k){
        cout<< "NAO EH SUFICIENTE";
    }
    else{
        cout << "EH SUFICIENTE";
    }
    return 0;
}