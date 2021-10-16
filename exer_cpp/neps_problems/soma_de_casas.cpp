#include <bits/stdc++.h>

using namespace std;

int n,k,V[10000],ini,fim,med;

int main(){
    cin>> n;
    for (int i = 0; i < n; i++)
    {
        cin>> V[i];
    }
    for (int i = 0; i < n; i++)
    {
        ini=i;
        fim= n-1;
        while(ini<fim){
            med=(ini+fim)/2;
            if(V[med]+V[i]>=k){
                fim=med;
            }
            else{
                ini=med+1;
            }
        }
        if(V[ini]+V[i]==k){
            cout<< V[i]<< ' ' << V[ini] << '\n';
            break;
        }  
    }
    return 0;
}