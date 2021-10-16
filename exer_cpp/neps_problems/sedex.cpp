#include <bits/stdc++.h>

using namespace std;

int a,b,c,x;

int main(){
    cin>>x;
    cin>> a >> b>> c;
    if(x<=a and x<=b and x<=c){
        cout<<'S';
    }
    else{
        cout<<'N';
    }
    return 0;
}