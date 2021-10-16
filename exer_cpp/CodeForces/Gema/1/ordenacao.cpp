#include <bits/stdc++.h>

using namespace std;

int v[3];

int main(){
    cin>> v[0] >> v[1] >>v[2];
    sort(v,v+3);
    cout<< v[2] << endl << v[1] << endl << v[0] << endl;
    return 0;
}