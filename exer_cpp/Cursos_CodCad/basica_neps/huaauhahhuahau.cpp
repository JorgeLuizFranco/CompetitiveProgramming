#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

string linha,s,vogais{'a','e','i','o','u'};

int main(){
    getline(cin,linha);
    for(char c: linha){
        for(int i=0; i<5;i++){
            if(c==vogais[i]){
                s+= c; 
            }
        }
    }
    for(int i=0; i<s.size();i++){
        if(s[i]!= s[s.size()-i-1]){
            cout<< 'N';
            return 0;
        }
    }
    cout<<'S';
    return 0;
}