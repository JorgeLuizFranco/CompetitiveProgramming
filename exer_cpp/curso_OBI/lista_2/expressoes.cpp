#include <bits/stdc++.h>

using namespace std;

stack<char> pilha;

char analisa(string linha){  
    
    while (!pilha.empty()) pilha.pop();  
    for (auto i: linha){       
        if(i=='{' || i=='[' || i=='('){           
            pilha.push(i); }
        else {
            //if( i=='}' or i==']' or i==')'){
            if(pilha.empty())
                return 'N'; 
            else{
                char x=pilha.top();
                pilha.pop();              
                if(i==')' && x!='(')   
                    return 'N';                
                else if(i==']' and x!='[')
                    return 'N'; 
                else if(i=='}' and x!='{')
                    return 'N';
                
            }
        }    
    }
    if (pilha.empty()) return 'S';
    else return 'N';
}

int main(){
    int n; 
    cin>>n;
    cin.ignore();
    while(n--){
        string linha="";        
        getline(cin,linha);        
        cout<< analisa(linha) << endl;
    }
    return 0;
}