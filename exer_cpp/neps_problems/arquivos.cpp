#include <bits/stdc++.h>

using namespace std;



int main(){
    int n,b,cont=0;
    cin>> n >>b;
    int a[n];
    for(int i=0; i<n; i++){
        cin>> a[i];
    }
    sort(a,a+n);
    int i=0,j=n-1;
    while(a[i]+a[j]>b){
        j--;
        cont++;
    }
    while(i<=j){
        if(a[i]+a[j]<=b){
            j--;
            i++;
        }
        else{
            j--;
        }
        cont++;
    }
    cout<< cont;
    return 0;
}