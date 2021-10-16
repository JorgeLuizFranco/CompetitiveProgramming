#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define fs first
#define sc second
using namespace std;

string as,morto;

map<string,int> assassinos;
set<string> mortos;
int main(){_
    while(cin>> as>> morto){
        mortos.insert(morto);
        if(!mortos.count(as)){
            assassinos[as]++;
        }
        if(assassinos.count(morto)){
            assassinos.erase(morto);
        }
    }
    cout<< "HALL OF MURDERERS\n";
    for(auto i: assassinos){
        cout<< i.fs << ' ' << i.sc << '\n';
    }
    return 0;
}
