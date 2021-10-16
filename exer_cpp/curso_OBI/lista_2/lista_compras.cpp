#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0)

using namespace std;

set<string> c;
string res;
int main(){
    int n; cin>>n;
    cin.ignore();
    while(n--){
        c.clear();
        string linha;
        getline(cin,linha);
        string s;
        linha.push_back(' ');
        for(char i: linha){
            if(i!= ' '){
                s+=i;
            }
            else{
                c.insert(s);
                s.clear();
            }
        }  for(auto i: c){
            res+= i + ' ';            
        } 
        res.pop_back();
        res+='\n';
    }
    cout<< res;
    return 0;
}