#include <iostream>

using namespace std;

int main(){
    int b=-1,n=-1;
    while( b!=0 && n!=0){
        cin >>b>>n;
        if(b==0 && n==0){
            break;
        }
        int R[b];
        for ( int i = 0; i < b; i++)
            cin>> R[i];
        for (int i=0; i<n; i++){
            int d,c,v;
            cin >> d >> c >>v;
            R[d-1]-=v;
            R[c-1]+=v;
        }
        int cont=0;
        for ( int i = 0; i < b; i++)
            if(R[i]>=0)
                cont++;
        if(cont==b)
            cout << 'S';
        else
            cout << 'N';
        
    }
    return 0;
}