#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
using namespace std;
map<string,float> d;
int main(){
    int n,m,p;
    cin>> n;
    while(n--){        
        cin>>m;
        while(m--){
            string s; float r;
            cin >> s >>r;
            d[s]=r;
        }
        cin>>p;
        float val=0;
        while(p--){
            string y; int x;
            cin >> y >>x;
            val+= d[y]*x;
        }
        cout.precision(3);
        printf("R$ %.2f\n",val); 
    }
    return 0;
}