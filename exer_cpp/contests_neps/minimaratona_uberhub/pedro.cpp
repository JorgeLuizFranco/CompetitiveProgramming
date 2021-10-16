#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define sc second

using namespace std;

int n,x,y,cont;
string s;
int main(){_
    cin>>n;
    cin.ignore();
    getline(cin,s);
    x=s.size();
    for(char c: s){
        if(c==' '){
            x--;
        }
    }
    cout<< (x<=n? "Mensagem lida":"Mensagem ignorada" );
    return 0;
}