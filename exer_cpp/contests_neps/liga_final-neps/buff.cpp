#include <iostream>

using namespace std;

int n,d,m,p;

int main(){
 cin>> n >> d >>m >>p;
 if((n*d)>(p*m)){
     cout<< "NERF";
 }
 else{
     cout<< "BUFF";
 }
 return 0;
}