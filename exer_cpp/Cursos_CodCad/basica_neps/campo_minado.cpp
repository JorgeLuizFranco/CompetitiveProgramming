#include <iostream>

using namespace std;

int main(){
    int n,a1=0,a2=0,a3=0;
    cin >>n;
    if(n<=2){
        n==1? cin>>a1 : cin>>a1>>a2;
        cout << a1+a2;
    }
    else{
        cin >> a1 >> a2 >> a3;
        cout << a1+a2;
        for(int i=4;i<=n;i++){
            cout << a1+a2+a3;
            a1=a2;
            a2=a3;
            cin >> a3;
        }
        cout  << a1+a2+a3;
        cout  << a2+a3;
    }
    
    return 0;
}