#include <bits/stdc++.h>

using namespace std;

struct medalhas
{
    int cod,tempo;
};

bool cmp(medalhas a, medalhas b){
    return (a.tempo < b.tempo) ;
}

medalhas V[3];

int main(){
    for(int i=0; i<3;i++){
        V[i].cod= i+1;
        cin>> V[i].tempo;
    }
    sort(V,V+3,cmp);
    for(int i=0; i<3;i++){
        cout<< V[i].cod << '\n';
    }
    return 0;
}