#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

#define inf 0x3f3f3f3f
using namespace std;

int n,m,v[100005],x;
int *lower,*upper;



int main(){_
  cin>>n>>m;
  for(int i=0;i<n;i++) 
    cin >> v[i];
  v[n]=inf;
  for(int i=0;i<m;i++) 
  {
   cin >> x;
   if (x < *v) cout << *v<<endl;
   else {    
     lower = lower_bound(v, v+n, x);   // >=x
     upper = upper_bound(v, v+n, x);   // >x     
     if (lower==upper)lower--;
     int x1=x-*lower;
     int x2=*upper-x;
     cout << ((x1<=x2)?(*lower):(*upper) )<<endl;
   }
    }
  return 0;
}