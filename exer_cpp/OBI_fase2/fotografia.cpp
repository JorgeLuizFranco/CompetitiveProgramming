#include <bits/stdc++.h>
#define fs first
#define sc second
#define INF 100000
using namespace std;

int a,l,n,x,y,id=INF,amin=INF;
pair<int,int> v[101];
int main(){
    cin>> a >>l;
    cin>> n;
    for(int i=0; i<n;i++){
        cin>> x >>y;
        v[i]={x,y}; 
    }
    for(int i=0; i<n; i++){
        if(min(a,l)<=min(v[i].fs,v[i].sc) and max(a,l)<=max(v[i].fs,v[i].sc)){
            if((v[i].fs*v[i].sc-a*l)==amin){
                id= min(id,i);
            }
            else{
                if((v[i].fs*v[i].sc-a*l)<amin){
                    amin=v[i].fs*v[i].sc-a*l;
                    id=i;
                }
            }
        }
    }
    cout<< (id==INF? -1: id+1);
    return 0;
}