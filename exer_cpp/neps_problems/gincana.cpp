#include <bits/stdc++.h>

using namespace std;

long long n,m;

int main(){
   cin>> n >>m;
   while(__gcd(n,m)!=1){
      m--;
   }
   cout<< m;
   return 0;
}