#include <bits/stdc++.h>

using namespace std;

stack<char> p;
string linha;
int n;
bool ok=true;
int main(){
    cin>> n;
    cin.ignore();
    while(n--){
        getline(cin,linha);
        for(char c: linha){
            if(c=='{'){
                p.push(c);
            }
            else if(c=='}'){
                if(!p.empty()){
                    p.pop();
                }
                else{
                    ok=false;
                }
            }
        }
    }
    if(!p.empty()){
        ok=false;
    }
    if(ok){
        cout<< 'S';
    }
    else{
        cout<<'N';
    }
    return 0;
}