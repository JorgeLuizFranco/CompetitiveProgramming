#include <bits/stdc++.h> 
using namespace std; 
  
int gcd(int a, int b) 
{ 
    return (a%b == 0)? abs(b) : gcd(b,a%b); 
} 
  

bool is(int a, int b, int c) 
{ 
    return (c%gcd(a,b) == 0); 
} 

int main() 
{ 
    int a=2020,b=2021,c,t;
    cin>> t;
    while (t--)
    {
        cin>>c;
        if(c>=max(a,b)){
            if(is(a,b,c)){
                cout<< "YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0; 
} 