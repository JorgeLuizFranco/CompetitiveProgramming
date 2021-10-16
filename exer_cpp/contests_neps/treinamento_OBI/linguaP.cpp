#include<bits/stdc++.h>

using namespace std;


int main(){
    string s,ans;
    int cont=0;
    getline(cin,s);
    for(char c:s){
        if(c!=' '){
            cont++;
        }
        if(cont%2==0){
            ans+=c;
        }
    }
    cout<< ans;
    return 0;
}