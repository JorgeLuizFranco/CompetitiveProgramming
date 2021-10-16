#include <bits/stdc++.h>

using namespace std;

int n,ga,gb;

queue<char> q;
char a,b;

int main(){
    for ( char i = 'A'; i <='P'; i++)
    {
        q.push(i);
    }
    n=15;
    while(n--){
        a= q.front();
        q.pop();
        b=q.front();
        q.pop();
        cin>> ga >> gb;
        if(ga>gb){
            q.push(a);
        }
        else{
            q.push(b);
        }
    }
    cout<< q.front();
    return 0;
}