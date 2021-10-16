#include<bits/stdc++.h>

using namespace std;

int n,x,y,s,mx,mi;

int main(){
    cin>> n >>x >>y;
    while (n--)
    {
        cin>>s;
        if(s+x>y and s-x>y){
            mi++;
            mx++;
        }
        else if(s+x>y){
            mx++;
        }
    }
    cout<< mi <<' '<<mx << '\n';
    return 0;
}