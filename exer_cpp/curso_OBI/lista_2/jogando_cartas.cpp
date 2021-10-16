#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(); cout.tie();

using namespace std;
queue<int> fila;
vector<int> v;
int n;
int main(){_
    cin>> n;
    while(n!=0){
        v.clear();
        while (!fila.empty()) fila.pop();
        //int V[n-1];
        for(int i=1;i<=n;i++){
            fila.push(i);
        }
        //int i=0;
        while(fila.size()>1){
           // V[i]= fila.front(); fila.pop();
            v.push_back(fila.front()); fila.pop();
            fila.push(fila.front()); fila.pop();
            //i++;
        }
        //cout<< "Discarded cards: ";
        /*for(int i=0;i<n-2;i++){
            cout<< V[i] << ", ";
        }*/
        cout<< "Discarded cards:";
        if(!v.empty()){
            cout<< " ";
            for(int i=0;i<n-2;i++){
                cout<< v[i] << ", ";
            }
            cout<< v[n-2] << endl;
        }
        else cout<< endl;
        //cout<< V[n-2] << endl;
        cout<< "Remaining card: "<< fila.front() << endl;
        cin>> n;
    }
    return 0;
}