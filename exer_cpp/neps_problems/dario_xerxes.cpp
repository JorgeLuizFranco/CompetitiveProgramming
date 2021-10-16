#include <bits/stdc++.h>
#define fs first
#define sc second
using namespace std;

map<int,pair<int,int>> m;

int n,d,x,a,b;

int main(){
    m[3]={0,4};
    m[2]={3,4};
    m[0]={1,2};
    m[1]={2,3};
    m[4]={0,1};
    cin>>n;
    while(n--){
        cin>>a >>b;
        if(m[a].fs==b or m[a].sc==b){
            d++;
        }
        else{
            x++;
        }
    }
    if(x>d){
        cout<< "xerxes";
    }    
    else{
        cout<< "dario";
    }
    return 0;
}