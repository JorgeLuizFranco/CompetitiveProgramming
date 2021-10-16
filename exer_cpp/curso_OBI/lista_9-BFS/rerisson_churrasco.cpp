#include<bits/stdc++.h>
#define pb push_back
#define fs first
#define sc second
using namespace std;

vector<int> v[1002];
vector<string> s;
set<string> d;
map<string,int> m;
string a,b,p[1002];
int n,g,t,visitado[1002];

void bfs(int no){
    int cont=0;
    queue<pair<int,int>> q;
    q.push({no,cont});
    while (!q.empty())
    {
        no=q.front().fs; 
        cont= ++q.front().sc;
        q.pop();
        if(cont<=g){
            for(int u: v[no]){
                if(!visitado[u]){
                    visitado[u]++;
                    q.push({u,cont});
                    if(!d.count(p[u]))
                        s.pb(p[u]);
                    d.insert(p[u]);
                }
            }
        }
    }   
}

int main(){
    cin>>n >>g;
    for(int i=0; i<n; i++){
        cin>> a >>b;
        if(!m[a]){
            m[a]=++t;
            p[t]=a;
        }
        if(!m[b]){
            m[b]=++t;
            p[t]=b;
        }
        v[m[a]].pb(m[b]);
        v[m[b]].pb(m[a]);
    }
    visitado[1]++;
    bfs(1);
    sort(s.begin(),s.end());
    cout<< s.size() << '\n';
    for(string c: s){
        cout<< c << '\n';
    }
    return 0;
}