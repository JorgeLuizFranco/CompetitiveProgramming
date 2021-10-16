#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define sc second
#define str(x) to_string(x)
#define pii pair<int,int>
#define maxn (int)1e5
#define inf 0x3f3f3f3f
using namespace std;

int t,a,b,dist[maxn];

int bfs(int x, int y){
    queue<int> q;
    q.push(x);
    dist[x]=0;
    while (!q.empty())
    {   
        int no=q.front();q.pop();
        //cout<<"no: "<<no<<endl;
        if(no==y) return dist[no];
        else{
            if( no+1<maxn and dist[no+1]==-1){
                q.push(no+1);
                dist[no+1]=dist[no]+1;
            }
        }
        string s= str(no);
        reverse(s.begin(),s.end());
        int n= stoi(s);
        if(n<maxn and dist[n]==-1){
            q.push(n);
            dist[n]=dist[no]+1;
        }
    }
    return -1;
}

int main(){_
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        memset(dist,-1,sizeof(dist));
        cout<< bfs(a,b)<<'\n';
    }
    return 0;
}