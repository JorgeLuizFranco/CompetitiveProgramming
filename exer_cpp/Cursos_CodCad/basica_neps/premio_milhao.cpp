#include <iostream>

using namespace std;

int main(){
int n,s=0,cont=0;
cin >>n;
while(s<1000000){
    int a;
    cin>>a;
    s+=a;
    cont++;
}
cout <<cont;
return 0;
}