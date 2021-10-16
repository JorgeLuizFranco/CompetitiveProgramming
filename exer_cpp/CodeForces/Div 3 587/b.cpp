#include<bits/stdc++.h>

using namespace std;

struct da{
    int cod,dano;
};

int n,ans;
da a[1002];

bool cmp(da a, da b){
    return a.dano>b.dano;
}

int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>> a[i].dano;
        a[i].cod=i+1;
    }
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++){
        ans+= a[i].dano*i+1;
    }
    cout<< ans << '\n';
    for(int i=0; i<n; i++){
        cout<< a[i].cod<< ' ';
    }
    return 0;
}