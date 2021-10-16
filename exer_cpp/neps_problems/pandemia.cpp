#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
using namespace std;

bool achou=false;
set<int> inf;
set<int> c;

int main(){_
    int n,m,in,r,a,x;
    cin>>n>>m;
    cin>> in >>r;
    inf.insert(in);
    for(int i=1; i<=m;i++){
        achou=false;
        cin>>a;
        while(a--){
            cin>>x;
            c.insert(x);
        }
        if(i>=r){
            for(int x: inf){
                if(c.count(x)){
                    achou=true;
                }
            }
            if(achou){
                for(int x: c){
                    inf.insert(x);
                }
            }
        }
        /*cout<<"\n Infectados : ";
        for(int i: inf){
            cout<< i << ' ';
        }
        cout<< "\nFim Infectados \n";
        cout<<"\n Estudantes : ";
        for(int i: c){
            cout<< i << ' ';
        }
        cout<< "\nFim Estudantes \n"; */
        c.clear();
    }
    cout<< inf.size();
    return 0;
}