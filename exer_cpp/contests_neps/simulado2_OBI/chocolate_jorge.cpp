#include <iostream>
#include <vector>
using namespace std;


int main(){
    int c,n,m,ans=0,emb,d;
    cin>> n >> c >> m;
    ans+= n/c;
    emb=n/c;
    while(emb>=m){
        d= emb/m;
        ans+=d;
        emb= (emb%m)+d; 
    }
    cout<< ans;
    return 0;
}