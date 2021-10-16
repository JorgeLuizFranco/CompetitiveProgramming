#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define ll long long
using namespace std;

int maior,cont=1;

int main(){_
    string s;
    cin>>s;
    for(int i=1; i<(int)s.size(); i++){
        if(s[i]==s[i-1]){
            cont++;
        }
        else{
            maior=max(cont,maior);
            cont=1;
        }
    }
    cout<< max(maior,cont);
    return 0;
}