#include <bits/stdc++.h>

using namespace std;

int C[3],J[2],a,b;

int main(){
    for(int i=0; i<3;i++){
        cin>> C[i];
    }
    cin>> a >> b; 
    sort(C,C+3);
    if(C[0]<=min(a,b) && C[1]<=max(a,b)){
        cout<< 'S';
    }
    else
    {
        cout<< 'N';
    }
    return 0;
}