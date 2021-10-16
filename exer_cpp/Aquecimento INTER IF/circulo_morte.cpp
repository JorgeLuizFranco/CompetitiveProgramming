#include <iostream>
#include <vector>
#define pb push_back
using namespace std;

int v[10002],n,x;
vector<int> mortos;
bool state=true;;
int acha(){
    for(int i=1; i<=n; i++){
        if(!v[i]){
            return i;
        }
    }
    return -1;
}
//[1,2,3,4,5,6,7]
int main(){
    mortos.pb(0);
    cin>>n>>x;
    for(int i=2,qtd=0; i<=n and qtd<n-1;i=i%n+1){
        if(!v[i] and state){
            v[i]=1;
            qtd++;
            state=false;
            //cout<< i << ' ';
            mortos.pb(i);
        }
        else if(!v[i]){
            state=true;
        }     
    }
    cout<< "Morte "<< x <<": "<<mortos[x];
    cout<< "\nSobrevivente: "<<acha()<< '\n';
    return 0;
}