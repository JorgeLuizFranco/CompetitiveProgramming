#include <bits/stdc++.h>

using namespace std;

int main(){
    int V[3];
    for (int i = 0; i < 3; i++)
    {
        cin>> V[i];
    }
    sort(V,V+3);
    if(V[0]==V[1]){
        cout<< V[2];
    }
    else{
        cout<< V[0];
    }
    return 0;
}