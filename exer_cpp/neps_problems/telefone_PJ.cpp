#include <bits/stdc++.h>

using namespace std;

map<char,int>  m;
string ans;
int main(){
    char c='A';
    for(int i=2; i<=7; i++){
        for(int j=0;j<3;j++,c++){
            m[c]=i;
        }
    }
    
    m['S']=7; m['T']=8; m['U']=8; m['V']=8;
    for(char x= 'W'; x<='Z';x++){
        m[x]=9;
    }
    while(cin>>c){
        if(c=='-'){
            ans+=c;
        }
        else{
            ans+= to_string(m[c]);
        }
    }
    cout<< ans;
    return 0;
}