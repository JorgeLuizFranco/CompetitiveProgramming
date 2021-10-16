#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

string res;
char gab;
int n,cont=0;
int main(){
    cin>>n;
    cin.ignore();
    getline(cin,res);
    for(char c: res){
        cin>> gab;
        if(c==gab){
            cont++;
        }
    }
    cout<< cont;
}