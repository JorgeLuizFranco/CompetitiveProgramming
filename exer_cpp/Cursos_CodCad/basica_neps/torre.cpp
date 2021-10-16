#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 1000
using namespace std;

int V[MAX+2][MAX+2];
int L[MAX+2];
int C[MAX+2];
int S;
int n,maior=0;
int main(){_
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>> V[i][j];
            L[i]+= V[i][j];
            C[j]+= V[i][j];
        }
    }
    for(int i=1; i<=n;i++){
        for(int j=1; j<= n; j++){
            S=L[i]+C[j]-2*V[i][j];
            maior= max(maior,S);
        }
    }
    cout<< maior;
    return 0;
}