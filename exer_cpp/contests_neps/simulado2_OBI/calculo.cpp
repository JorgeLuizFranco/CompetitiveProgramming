#include <bits/stdc++.h>

using namespace std;

int n1[10000],n2[10000],ans[10002],m,n,x;

int main(){
    cin>> m >> n;
    for(int i=0; i<m; i++){
        cin>> n1[i];
    }
    for(int i=0; i<n; i++){
        cin>> n2[i];
    }
    x= max(n,m);
    for(int i=x; i>=0; i--){
        if(ans[i+1]>1){
            //ans[i+1]%2==1? ans[i+1]=1 : ans[i+1]=0;
            ans[i+1]-=2;
            ans[i]++;
        }
        ans[i]+=n1[i]+n2[i];
    }
    if(ans[0]==2){
        cout<< 1<<' ';
        ans[0]=0;
    }
    int j=x;
    while(ans[j]==0){
        j--;
    }
    x=j+1;
    for(int i=0; i<x; i++){
        cout<< ans[i] << ' ';
    }
    return 0;
}