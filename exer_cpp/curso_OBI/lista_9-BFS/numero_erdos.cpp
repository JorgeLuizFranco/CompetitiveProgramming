#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int n;
vector<pair<string,int>> A[100];
string linha,palavra;

void bfs(){

}

int main(){
    cin>> n;
    cin.ignore();
    for(int i=0; i<n;i++){
        getline(cin,linha);
        for(int j=0; j<linha.size(); j++){
            if(linha[j]==',' or j==linha.size()-1){
                A[i].pb(palavra);
                palavra.clear();
            }
            else if(palavra.size()){
                palavra+=linha[j];
            }
            else if(linha[j]!=' '){
                palavra+=linha[j];
            }
        }
        cout<< "\n Autores: ";
        for(string s: A[i]){
            cout<< s << '*';
        }
        cout<< '\n';
    }
    return 0;
}