#include <bits/stdc++.h>
#define _ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define  sz(x) (int)(x).size()
#define pb push back
#define eb emplace_back
#define vi vector<int>

using namespace std;

vi v;

int n,x;

int main(){
    cin>>n;
    v= vi(n);
    for(int &x : v){
        cin>>x;
    }
    cout << "Tamanho: " << sz(v) << endl;
    for(int x : v){
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}
