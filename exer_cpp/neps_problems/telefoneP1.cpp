#include <bits/stdc++.h>

using namespace std;

map<char,char>  m;
string ans;
int main(){
    char c='A';
    for(char i='2'; i<='7'; i++){
        for(char j='0';j<'3';j++,c++){
            m[c]=i;
        }
    }
    
    m['S']='7'; m['T']='8'; m['U']='8'; m['V']='8';
    for(char x= 'W'; x<='Z';x++){
        m[x]=9;
    }
    string linha;
    cin>> linha;
    for(char c: linha){
        if(m.count(c)){
            ans+=m[c];
        }
        else{
            ans+= c;
        }
    }
    cout<< ans << '\n';
    return 0;
}