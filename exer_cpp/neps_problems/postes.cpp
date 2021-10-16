#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,s=0,c=0,x;
    cin>> n;
    while (n--)
    {
        cin>> x;
        if(x<50){
            s++;
        }
        else if(x<85){
            c++;
        }
    }
    cout<< s << ' ' << c;
    return 0;
}