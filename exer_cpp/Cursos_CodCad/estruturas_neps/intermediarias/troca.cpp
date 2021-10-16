#include<bits/stdc++.h>

using namespace std;

set<int> c1,c2;

int main(){
    int a,b,x,cont=0;
    cin>> a >>b;
    while(a--){
        cin>>x; c1.insert(x);
    }
    while (b--)
    {
        cin>>x; c2.insert(x);
    }   
    if(c1.size()<c2.size()){
        for(int x: c1){
            if(!c2.count(x)){
                cont++;
            }
        }
    }
    else{
        for(int x: c2){
            if(!c1.count(x)){
                cont++;
            }
        }
    }
    cout<< cont << endl;
    return 0;
}