#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

stack<int> pilha;
queue<int> saida;
int n,x;
int main(){_
    cin>>n;
    while(n!=0){
    	cin>>x;
        while(x!=0){
            for(int i=1;i<=n;i++){               
                saida.push(x);
                if(i==saida.front()){
                    saida.pop();
                }
                else{
                    while(!pilha.empty() && pilha.top()==saida.front()){
                        pilha.pop(); 
						saida.pop();                   
                    }
                   
					pilha.push(i);                  
                }
                cin>>x;
            }
            while (!pilha.empty() && !saida.empty())
            {
            
                if(pilha.top()==saida.front()){
                    pilha.pop(); saida.pop();
                }
                else{
                    break;
                }
            }
            if(pilha.empty() && saida.empty()){
                cout<< "Yes" << endl;
            }
            else{
                cout<< "No" << endl;
                while(!pilha.empty()) pilha.pop();
                while(!saida.empty()) saida.pop();
            }                     
        }
        cout << endl;                
        cin>>n;
    }
 return 0;
}
