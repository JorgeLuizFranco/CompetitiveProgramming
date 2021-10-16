#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0)

using namespace std;

stack<int> pilha;
vector <int> V;

int main(){
int n,x; cin>>n;
string s; cin>>s;
while(s!= "PUSH"){
cin>> s;
}
int menor; cin>>menor; pilha.push(menor);

while(n--){
cin>> s;
if(s=="PUSH"){
cin>> x;
pilha.push(x);
if(x<menor)
menor=x;
}
else{
if(pilha.empty()) cout << "EMPTY";
else if(s=="POP"){
    pilha.pop();}
else cout<< menor;  
}
}
return 0;
}