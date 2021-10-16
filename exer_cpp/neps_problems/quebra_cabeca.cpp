#include <bits/stdc++.h>
#define fs first
#define sc second
using namespace std;

char c;
int n,x,y,key;
map<int,pair<char,int>> m;


int main(){
    cin>> n;
    for(int i=0; i<n; i++){
        cin>> x >> c >>y;
        m[x]={c,y};
    }
    key=0;
    for(int i=0; i<n; i++){
        cout<< m[key].fs;
        key = m[key].sc;
    }
    return 0;
}