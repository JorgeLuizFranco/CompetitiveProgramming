#include <iostream>

using namespace std;

int main(){
    int i1,i2,f1,f2;
    cin>> i1 >> i2 >> f1 >> f2;
    if(i1==f1 && i2==f2)
        cout << 0;
    else{
        if((i1==1 && f1==1) || (i1==0 && f1==0))
            cout<<2;
        else
            cout <<1;
    }
return 0;
}