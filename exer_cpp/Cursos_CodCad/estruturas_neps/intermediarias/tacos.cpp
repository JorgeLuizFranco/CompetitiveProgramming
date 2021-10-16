#include <bits/stdc++.h>

using namespace std;

set<int> c;

int n,x,cont;
int main(){
    cin>> n;
    while(n--){
        cin>> x;
        if(!c.count(x)){
            c.insert(x);
            cont+=2;
        }
        else{c.erase(x);}
    }
    cout<< cont;
}