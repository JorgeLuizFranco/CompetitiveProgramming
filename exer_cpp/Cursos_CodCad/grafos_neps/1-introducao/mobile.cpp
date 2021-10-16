#include <bits/stdc++.h>
#define pb push_back

using namespace std;

int n,x,y,ini;

vector<int> v[100002];

int dfs(int no){
    if (!v[no].size()){
        return 1; 
    }
    else{
        int cont = dfs(v[no][0]);
        if(cont==-1){
            return -1;
        }
        int sum=cont;
        for(int i=1; i<v[no].size(); i++){
            int cont1=dfs(v[no][i]);            
            if (cont1 != cont || cont1==-1){
                return -1;
            }
            sum+= cont1;         
        }
        return  sum+1;
    }
}

int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>> y >>x;
        // if(x==0){
        //     ini=y;
        // }
        // else{
            v[x].pb(y);
        // }
    }
    if(dfs(0)==-1){
        cout<< "mal";
    }
    else{
        cout<< "bem";
    }
    return 0;
}