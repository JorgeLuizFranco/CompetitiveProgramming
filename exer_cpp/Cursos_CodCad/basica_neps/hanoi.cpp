#include <bits/stdc++.h>

using namespace std;

int hanoi(int n){
    if (n==1){
        return 1;
    }
    else{
        return 2*hanoi(n-1)+1;
    }
}

int main(){
    int n,i=1;
    cin>> n;
    while(n!=0){
        cout<<"Teste "<<i << endl; 
        cout<< hanoi(n)<< endl;
        i++;
        cin>> n;
    }
    return 0;
}