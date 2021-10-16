#include<bits/stdc++.h>
#define _ ios_base::synch_with_stdio(0)

using namespace std;

int main(){
    int n,x=0, menor=0;
    
    string s;
    cin>> n;
    cin>> s;    
    int V[n],j=1;
    V[0]=0;
    for(auto i: s){
        i=='A'? x++ : x--; 
        if(x<menor) menor=x;
        V[j++]=x;
    }
    
    for (int i=0;i<n;i++)
    {
        cout << V[i]-menor << " ";
    }
    return 0;
}