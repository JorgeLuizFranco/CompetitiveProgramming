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

int n,a,b,t,m,visited[50],cont;
map<string,int> d;
vector<int> g[50];
queue<int> q;
string v[50],ans;

void bfs(){
    while (!q.empty())
    {
        ++cont;
        int no=q.front(); q.pop();
        ans+= v[no]+" ";
        for(int u: g[no]){
            if(!visited[u]){
                visited[u]++;
                q.push(u);
            }
        }
    }
}

int main(){
    while (cin>>n and n)
    {
        cout<< "Teste" << ++t<<'\n';
        for(int i=1; i<=n; i++){
            string s; cin>>s;
            d[s]=i;
            v[i]=s;
        }
        for(int i=1; i<=n; i++)
        {
            string s; cin>>s>>m;
            int no=d[s];
            if(m==0) q.push(no);
            while (m--)
            {
                string u; cin>>u;
                g[d[u]].pb(no);
            }
        }
        if(!q.empty()){
            bfs();
            if(cont==n) cout<< ans<< '\n';
            else cout<< "impossible\n";
        }
        else
            cout<<"impossivel\n";
        cout<< '\n';
        cont=0;
    }
    return 0;
}