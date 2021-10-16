#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n;
bool low,up,dig;
string s;

int main(){_
    cin>>n;
    while(n--){
        cin>> s;
        for(char c: s){
            //cout<< c<<'\n';
            if(c>='a' and c<='z'){
                low=true;
                //cout<< " is low\n";
            }
            else if(c>='A' and c<='Z'){
                up= true;
                //cout<< " is up\n";
            }
            else if(c>='1' and c<='9'){
                dig=true;
                //cout<< " is dig\n";
            }
        }
        if(dig and up and low){
            cout<< s << '\n';
        }
        else{
            if(dig and !up and !low){
                s[0]='1';
                cout<< s;
            }
            else if(!dig and up and !low){
                s[0]='A';
                cout<< s;
            }
            else{
                s[0]='a';
                cout<< s;
            }
        }
    }
    return 0;
}   