#include <bits/stdc++.h>

using namespace std;

int v[3],v2[2];

int main(){
    cin>> v[0] >> v[1] >> v[2];
    sort(v,v+3);
   /* for(int i=0; i<3; i++){
        cout<< i<< ':' << v[i] << ' ';
    }*/
    cin>> v2[0] >> v2[1];
    sort(v2,v2+2);
    //cout<< '\n';
    /*for(int i=0; i<3; i++){
        cout<< i<< ':' << v2[i] << ' ';
    }*/
    if(v[0]<=v2[0] and v[1]<=v2[1]){
        cout<< 'S';
    }
    else{
        cout<< 'N';
    }
    return 0;
}