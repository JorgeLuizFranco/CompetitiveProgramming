#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define sc second

using namespace std;

int n;
string nome,s;
int main(){_
    getline(cin,nome);
    if(nome=="Reluew Markinhos"){
        cin>>n;
        cin.ignore();
        getline(cin,s);
        for(int i=0; i<(int)s.size(); i++){
            s[i]+=(n);
        }
        cout<<s;
    }
    else{
        cout<< "Nao eh possivel descriptografar!";
    }
    return 0;
}