#include <bits/stdc++.h>

using namespace std;

int a,n,f,ans;

int main(){
    cin>> a >>n;
    while(n--){
        cin>> f;
        if(f*a>=40000000){
            ans++;
        }
    }
    cout<< ans;
    return 0;
}