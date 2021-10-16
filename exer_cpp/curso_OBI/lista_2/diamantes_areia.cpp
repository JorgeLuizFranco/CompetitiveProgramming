#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0)

using namespace std;
stack<char> pilha ;
int main(){_
    int n; cin>>n;
    while(n--){
    string s; int cont=0;
    cin>>s;
    for(auto i: s){
        if(i=='<')
            pilha.push(i);
        else if(i=='>' && !pilha.empty()){
            pilha.pop();
            cont++;
        }
    }
    cout<< cont<<endl;
    while(!pilha.empty()) pilha.pop();
    }
    return 0;
}