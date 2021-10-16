#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
using namespace std;

long long r,l,n,v[3*(int)1e5+2],sob,usado[3*(int)1e5+2];

int main(){_
    cin>> l>>r;
    n= (r-l+1);
    for (int i = 0,j=l; j <=r; i++,j++)
    {
        //cout<< j <<'\n';
        v[i]=j; 
    }
    cout<< "YES\n";
    for(int i=0; i<n/2; i++){
        for(int j=0; j<n; j++){
            for(int k=1; k<n; k++){
                if(__gcd(v[j],v[k])==1 and !(usado[j]+usado[k]) and v[j]!=v[k]){
                    cout<< v[j] <<' '<< v[k] << endl;
                    usado[j]=1,usado[k]=1;
                    break;
                }
            }
        }
    }
    return 0;
}   