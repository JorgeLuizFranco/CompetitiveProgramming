#include <bits/stdc++.h>

using namespace std;

int f,h,p,d;

int main(){
    cin>> h>> p >> f >>d;
    cout<< (((16+ d*(h-f))%16<((16+ d*(p-f)))%16)? 'S': 'N');
}