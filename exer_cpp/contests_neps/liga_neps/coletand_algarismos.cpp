#include <bits/stdc++.h>
#define _ ios_base::synch_with_stdio(0)

using namespace std;

int V[7];

int main(){
    int i=0,x,r,q;
    cin>> x;
    while(x>0){
        r= x%10;
        q= x/10;
        V[i++]= r;
        x= q;
    }
    int anterior=0,soma=0,ma,me; 
    for(i--;i>=0;i--){
        if(anterior>V[i])
        {
            ma=anterior;
            me= V[i];
        }
        else
        {
            ma= V[i];
            me= anterior;
        }
         x= ma-me;
        int y= 10+me-ma;
        soma+= min(x,y);
        anterior = V[i];
    }
    cout<< soma;
    return 0;
}