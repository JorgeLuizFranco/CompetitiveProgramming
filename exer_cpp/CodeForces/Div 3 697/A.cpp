#include<bits/stdc++.h>

using namespace std;

long long n;
int t;
vector<int> v;
bool is_prime(long long x){
    for(long long i=2; i*i<=x; i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    for(int i=3; i<=(int)1e7; i++){
        if(is_prime(i)){
            v.push_back(i);
        }
    }
    for(int i=0; i<10;i++){
        //cout<< v[i]<< ' ';
    }
    cin>> t;
    while(t--){
        bool is=false;
        cin>>n;
        if(is_prime(n) and n!=2){
            cout<< "YES\n";
            is=true;
        }
        else{
            for(int i=0; i<(int)v.size() and v[i]<=n;i++){
                if(n%v[i]==0){
                    cout<< "YES\n";
                    is=true;
                    break;
                }
            }
        }
        if(!is){
            cout<< "NO\n";
        }
    }
    return true;
}