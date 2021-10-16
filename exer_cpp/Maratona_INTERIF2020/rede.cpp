#include <bits/stdc++.h>
#define INF 1e9
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int N, M;
vector< pair<int,int> > V[1010];
int dis[1010];

int Dijkstra(int S){
    for(int i=0;i<=N;i++){
        dis[i]=INF;
    }
    dis[S]=0;
    priority_queue< pair<int,int>, vector< pair<int,int> >, greater< pair<int,int> > > P;
    P.push({dis[S],S});
    int dist=0;

    while(!P.empty()){
        int D, A;
        D=P.top().first;
        A=P.top().second;
        P.pop();
        if(D>dis[A]) continue;
        dist=max(D,dist);

        for(int i=0;i<V[A].size();i++){
            int X, Y;
            X=V[A][i].first;
            Y=V[A][i].second;
            if(dis[X]>dis[A]+Y){
                dis[X]=dis[A]+Y;
                P.push({dis[X],X});
            }
        }
    }

    return dist;
}


int main(){_
    cin>>N>>M;
    for(int i=0;i<=N;i++){
        dis[i]=INF;
    }
    int ans;
    ans=INF;

    while(M--){
        int A, B, dist;
        cin>>A>>B>>dist;
        V[A].push_back({B,dist});
        V[B].push_back({A,dist});
    }

    for(int i=0;i<N;i++){
        ans=min(ans,Dijkstra(i));
    }

    cout<<ans<<endl;

   return 0;
}
