#include <bits/stdc++.h>

using namespace std;

long long n,k,v[100002],sum;

int main(){
    cin>> n >>k;
    for(int i=0; i<n; i++){
        cin>> v[i];
    }
    sort(v,v+n,greater<int>());
    for(int i=0; i<n/k; i++){
        sum+= v[i]*k;
    }
    sum+= v[n/k]* (n%k);
    cout<< sum<< '\n';
    return 0;
}