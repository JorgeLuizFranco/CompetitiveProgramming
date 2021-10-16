#include<bits/stdc++.h>

using namespace std;

string s,s2;
char c;
int n;
int main(){
    cin>>n;
    if(n%2==0){
        for(int i=0; i<n/2; i++){
            cin>>c;
            s+=c;
        }
        for(int i=n/2; i<n;i++){
            cin>>c;
            s2+=c;
        }
        if(s==s2){
            cout<< "Yes";
        }
        else{
            cout<< "No";
        }
    }
    else{
        cin>>c;
        cout<< "No";
    }
    return 0;
}