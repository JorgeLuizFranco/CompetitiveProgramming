#include <iostream>

using namespace std;

int main(){
    int n,a,b,seq=1,Seq=0;
    cin >> n;
    cin>> a;
    b=a;
    for(int i=0;i<n-1;i++){
        cin>>a;
        if(a==b)
            seq++;
        else{
            seq=1;
          }
          if (seq>Seq){
                Seq=seq;
            }
        b=a;
    }
    cout<<Seq;
    return 0;
}