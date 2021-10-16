#include <bits/stdc++.h>

using namespace std;

int n,freq[(int)1e4+2],tam,maior,mfreq;
string linha;
int main(){
    cin>> n;
    cin.ignore();
    while(n--){
        getline(cin,linha);
        tam= linha.size();
        freq[tam]++;
        if(freq[tam]>mfreq){
            mfreq= freq[tam];
            maior=tam;
        }
    }
    cout<< maior << '\n';
    return 0;
}