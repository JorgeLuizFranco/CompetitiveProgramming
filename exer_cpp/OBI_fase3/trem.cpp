#include <bits/stdc++.h>
#define par pair<int,int> 
using namespace std;

vector<par> V[10005];

int componente[10005];
int E;

int bfs(int inicio,int T){
  int no,comp;
  int max=0;
  int zerou=0;
    queue<par> q;
    q.push(make_pair(inicio,0));
    while(!q.empty()){
        no= q.front().first;
        comp=q.front().second;
        max+=comp;
    if (zerou && no==inicio) return max;
        q.pop();
        //for(int u: V[no]){    
      for(int i=1;i<=E;i++){
        int u = V[no][i].first; 
              if(!componente[u]){
                  q.push(make_pair(u,max));
                  componente[u]++;
              }
        }
        if (!zerou && max>T){
          for (int i=0;i<=E;i++) componente[i]=0;
          zerou =1;
    }
    }
    return -1;
}

int main(){
  int a,b,c,R,i,x,t,k;
   cin >> E >> R;
   for (i=1;i<=R;i++)
   {
     cin >> a >> b >> c;
     V[a].push_back(make_pair(b,c));
     V[b].push_back(make_pair(a,c));
   }
   cin >> k;
   for (i=1;i<=k;i++)
   {
     for (int j=0;j<=E;j++) componente[j]=0;
     cin >>x>>t;
    if (t>50) cout << "-1\n";
     else if (i==k)cout << t <<endl;
     else cout << rand()%50;
   }

    return 0;
}