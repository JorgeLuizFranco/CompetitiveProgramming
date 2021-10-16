#include<bits/stdc++.h>
#define maxn 100005
using namespace std;

int n,k,parent[maxn];

int findx(int x){
    if(x==parent[x]) return x;
    return parent[x]=findx(parent[x]);
}

void join(int x, int y){
    parent[y]=x;
}

int main(){
    cin>>n>>k;
    for(int i=1; i<=n; i++){
        parent[i]=i;
    }
    while(k--){
        char c;
        int x,y; cin>>c>>x>>y;
        if(c=='C'){
            if(findx(x)==findx(y)) cout<<"S"<<endl;
            else cout<<"N"<<endl;
        }
        else{
            join(findx(x),findx(y));
        }
    }   
    return 0;
}