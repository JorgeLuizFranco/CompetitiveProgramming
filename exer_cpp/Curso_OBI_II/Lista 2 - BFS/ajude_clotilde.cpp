#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define sc second
#define str(x) to_string(x)
#define pii pair<int,int>
#define maxn 2*(int)1e5
#define inf 0x3f3f3f3f
using namespace std;

int o,d,n;
map<int,int> dist;

int bfs(){
    queue<int> q;
    q.push(o);
    dist[o]=0;
    while (!q.empty())
    {
        int no=q.front();q.pop();
        if(dist[no]==inf) continue;
        cout<< no<<endl;
        if(no==d) return dist[no]; 
        if(no%2==0 and dist.find(no/2)==dist.end() and no/2<maxn){
            q.push(no/2);
            dist[no/2]=dist[no]+1;
        }
        if(dist.find(no*2)==dist.end() and no*2<maxn){
            q.push(no*2);
            dist[no*2]=dist[no]+1;
        }
        if(dist.find(no*3)==dist.end() and no*3<maxn){
            q.push(no*3);
            dist[no*3]=dist[no]+1;
        }
        if(dist.find(no*2)==dist.end() and no+1<maxn){
            q.push(no+1);
            dist[no+1]=dist[no]+1;
        }
        if(dist.find(no-1)==dist.end() and no-1<maxn and no-1>=0){
            q.push(no-1);
            dist[no-1]=dist[no]+1;
        }
    }
    return -1;
}

int main(){_
    while(cin>>o>>d>>n and n+o+d){
        while (n--)
        {
            int k; cin>>k;
            dist[k]=inf;
        }
        cout<<"opa:\n";        
        cout<< bfs()<<'\n';
        dist.clear();
    }
    return 0;
}