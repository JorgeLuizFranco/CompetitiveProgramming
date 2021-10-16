#include <bits/stdc++.h>

using namespace std;

map<char,char> m;
char w;
string linha;
int main(){
    for(char c='a'; c<='z'; c++){
        cin>>w;
        m[w]=c;
    }
    cin.ignore();
    getline(cin,linha);
    for(char &c : linha){
        cout<< m[c];
    }
    return 0;
}