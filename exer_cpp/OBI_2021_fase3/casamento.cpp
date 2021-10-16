#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define pq priority_queue
#define sc second
#define ub upper_bound
#define print(x) for(int wx=0; wx<sz(x); wx++) cout<< x[wx]<< ' ';
#define lb lower_bound
#define ll long long
#define str(x) to_string(x)
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define pif pair<int,float>
#define hash map<float,int>
#define maxn 2*(int)1e5
#define inf 0x3f3f3f3f
using namespace std;

ll x,y,nx,ny,cx,cy,c,c1;


int main(){_

int maior,menor,extra,testex,testey;
 
    cin >>x>>y;  
    
    nx=x;ny=y;
    c=0;
    cx=1;
    
    while(nx>0&& ny>0)
  {
    nx/=10;
    ny/=10;
    c++;
    cx*=10;
  }

  if (nx >0) {
    maior=x;
    extra=nx;
    menor=y;
  }
  else {
       maior=y;
       extra=ny;
       menor=x;  
  } 
  c1=c; 
  cy=cx;
  while(extra>0) {
      c1++;
      extra/=10;
      cx*=10;
    }

  nx=ny=0;
  cx/=10;  
  while (c1>c){
    x=maior/cx;
    maior-=(x*cx);
    cx/=10;
    nx = nx*10+x;
    c1--;
  }
    testex=testey=1;
  while (c>0){
    x=maior/cx;
    maior-=(x*cx);
    y=menor/cx;
    menor-=(y*cx);
    cx/=10;
    if (x>y) {
        testex=0;
        nx = nx*10+x;  
    } 
    else if (y>x) {
      testey=0;
      ny = ny*10+y;
    }
    else {
        testey=testex=0; 
        nx = nx*10+x;
        ny = ny*10+y;
      }
    
    c--;
  }
         
  if (testex) nx=-1;
  else if (testey) ny=-1;
  if (nx<ny) cout <<nx << " "<<ny;
  else cout <<ny << " "<<nx;  
  return 0;
}