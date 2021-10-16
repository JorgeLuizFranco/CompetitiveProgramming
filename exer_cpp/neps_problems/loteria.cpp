#include <bits/stdc++.h>
#define pb push_back
using namespace std;

vector<int> v;
set<int> c;
map<int,string> m;
int cont;
int main(){
    m[3]="terno",m[4]="quadra",m[5]="quina",m[6]="sena";
    for(int i=0,x; i<6; i++){
        cin>>x;
        v.pb(x);
    }
    for(int i=0,x; i<6; i++){
        cin>>x;
        c.insert(x);
    }
    for(int i: v){
        if(c.count(i)){
            cont++;
        }
    }
    if(cont>=3){
    cout<< m[cont];
    }
    else{
        cout<< "azar";
    }
    return 0;
}