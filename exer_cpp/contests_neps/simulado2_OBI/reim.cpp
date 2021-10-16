#include<bits/stdc++.h>
#define INF 1e9
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define lsb(x) ((x) & (-x))
#define ii pair<int,int>
using namespace std;
typedef long long int ll;

int N, M, ini, H[220], vis[220], ans;
vector<int> V[220];

void dfs(int A){
    ans=max(ans,vis[A]);
    for(int i=0;i<V[A].size();i++){
        int X;
        X=V[A][i];
        if(vis[A]+1>vis[X]){
            vis[X]=1+vis[A];
            dfs(X);
        }
    }
}

int main(){_
    cin>>N>>M>>ini;

    for(int i=1;i<=N;i++){
        cin>>H[i];
    }

    while(M--){
        int A, B;
        cin>>A>>B;
        if(H[A]>H[B])
            V[A].push_back(B);
        if(H[B]>H[A])
            V[B].push_back(A);
    }

    dfs(ini);

    cout<<ans<<endl;

    return 0;
}