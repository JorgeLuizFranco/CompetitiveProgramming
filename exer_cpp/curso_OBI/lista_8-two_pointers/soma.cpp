#include <bits/stdc++.h> 
#define ll long long
using namespace std;

int n,k,v[5*(int)1e5+1],cont;

int main(){
    cin>> n >>k;
    for(int i=0; i<n; i++){
        cin>> v[i];
    }
    int i=0,j=0;
    ll sum=v[0];
    while(i<n and j<n){
        if(sum==k){
            cont++;
            i++;
        }
        else if(sum<k){
            j++;
            if(j<n){
                sum+=v[j];
            }
        }
        else{
            sum-=v[i];
            i++;
        }
    }
    cout<< cont;
    return 0;
}