#include <iostream>

using namespace std;

int main(){
int n,cont;
cont=0;
cin >> n;
int i=0;
while(i<n){
int a,b;
cin >> a >> b;
if(a>b)
    cont+=b;
i++;
}
cout<< cont;
return 0;
}