#include <bits/stdc++.h>
#define fs first
#define sc second
#define INF (unsigned)!((int)0)
using namespace std;

int cam[100000],n,cont,dist[100000];

int bfs(int no){
    queue<pair<int,int>> q;
    q.push({no,0});
    while(!q.empty()){
        //cout<< "Entrou no BFS\n";
        no= q.front().fs,cont= q.front().sc;
        q.pop();
        //cout<< "no= "<<no << " cont= "<<cont << '\n';
        if(no==n-1){
            return cont;
        }
        if(cam[no+1]==1){
            if(!dist[no+1]){
                q.push({no+1,cont+1});
                dist[no+1]=1;
            }
        }
        if(cam[no+2]==1){
            if(!dist[no+2]){
                dist[no+2]=1;
                q.push({no+2,cont+1});
            }
        }
    }
    return -1;
}

int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>> cam[i];
        //cout<< cam[i] << ' ';
    }
    cout<< bfs(0);
    return 0;
}