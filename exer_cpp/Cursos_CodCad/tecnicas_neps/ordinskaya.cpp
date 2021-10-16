#include <bits/stdc++.h>

using namespace std;

long long n,m,s,x,ant;

int main(){
    cin>> n >>m;
    while(n--){
        cin>>x;
        //cout<< x << ' ';
        if(ant<=min(x,(m-x))){
            ant=min(x,(m-x));;
            s+=ant;
        }
        else if(ant<=max(x,(m-x))){
            ant=max(x,(m-x));;
            s+=ant;
        }
        else{
            cout<< -1;
            return 0;
        }
    }
    cout<< s;
    return 0;
}