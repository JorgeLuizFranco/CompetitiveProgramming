#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sz(x) (int)(x).size()
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define all(x) (x).begin(), (x).end()

using namespace std;


map<int, vector<int>> f;
map<int, vector<int>>::iterator it;
int x,y,n,key,z;
int main(){_
    cin>>n;
    while(n--){
        cin>> x >>y;
        f.clear();
        for(int i=0;i<y;i++){
            cin >>z;
            vi v;
            key= z%x;
            if(f.count(key)){
                v= f[key];
                v.push_back(z);
                f[key]= v;
            }              
            else{
                v.push_back(z);
                f[key]= v;
            }               
        }
        for(int i=0; i<x; i++){
            cout<< i << " -> ";
            if(f.count(i)){
                vi v= f[i];
                for(int j : v)
                    cout<<  j << " -> " ;
            }
            cout << "\\\n";
        }
 /*    for (it = f.begin(); it != f.end(); it++){
        vi v = it->sc;
        int k = it->fs;
        cout << k << " -> ";
        for(int i : v)
            cout<<  i << "->" ;
        cout << " \\ \n";
    }*/
    if(n>0)
        cout << '\n';
    
}
return 0;
}

