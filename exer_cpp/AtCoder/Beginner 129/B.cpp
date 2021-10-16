#include<bits/stdc++.h>

using namespace std;

int v[102],lft,rgt,n,s1,s2;

int main(){
    cin>>n; rgt=n-1;
    for(int i=0; i<n;i++){
        cin>>v[i];
    }
    while (lft!=rgt)
    {
        //cout<< s1 << ' '<<s2 << endl;
        if(s1<s2){
            s1+=v[lft++];
        }
        else{
            s2+=v[rgt--];
        }
    }
    if(s1<s2){
        s1+=v[lft];
    }
    else{
        s2+=v[rgt];
    }
    cout<< abs(s1-s2);
    return 0;
}