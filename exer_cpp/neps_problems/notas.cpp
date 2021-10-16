#include <bits/stdc++.h>
#define fs first
#define sc second
using namespace std;

pair<int,int> p(0,0);
map <int,int> m;
int n,key;
int main(){
    cin>>n;
    while(n--){
        cin>> key;
        //cout<< "chave" << key << '\n';
        m[key]++;
        //cout<< "valor" << m[key] << '\n';
        if(m[key]>p.sc or (m[key]==p.sc and key>p.fs)){
           // cout<< p.fs <<'\n';
            //cout<< p.sc <<'\n';
            p.fs=key;
            p.sc=m[key];
        }
    }
    cout<< p.fs;
    return 0;
}