#include <iostream>

using namespace std;

int main(){
    int n,cont=0;
    cin>>n;
    int V[n];
    for (int i=0;i<n;i++){
        cin >> V[i];
        if(i>1 && V[i]==0 && V[i-1]==0 && V[i-2]==1 )
            cont++;
    }
    cout << cont;
}