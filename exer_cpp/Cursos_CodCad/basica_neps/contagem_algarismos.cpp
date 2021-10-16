#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int F[10],n,x;
int main(){_
    cin>> n;
    while(n--){
        cin>>x;
        while (x!=0)
        {
            F[x%10]++;
            x/=10;
        }
        
    }
    for(int i=0; i<10;i++){
        cout<< i << " - " << F[i] << '\n';
    }
    return 0;
}