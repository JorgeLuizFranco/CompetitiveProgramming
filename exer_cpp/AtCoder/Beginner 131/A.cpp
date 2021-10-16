#include<bits/stdc++.h>

using namespace std;

string s;

string check(){
    for (int i = 0; i < (int)s.size()-1; i++)
    {
        if(s[i]==s[i+1]){
            return "Bad";
        }
    }
    return "Good";
}

int main(){
    cin>>s;
    cout<< check();
    return 0;
}