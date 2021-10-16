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

struct node
{
    string nome;
    int cod;
};


int n,k,dist[102],ini,visited[102],t;
vector<string> A[102];
vector<int> g[102];
string linha,palavra;

void bfs(){
    //cout<< "\nini: "<<ini<<endl;
    dist[ini]=0;
    visited[ini]=1;
    queue<int> q;
    q.push(ini);
    while (!q.empty())
    {
        int no=q.front(); q.pop();
        //cout<< "no: "<<no<<endl;
        for(int u: g[no]){
            if(!visited[u]){
                visited[u]++;
                q.push(u);
                dist[u]=dist[no]+1;
            }
        }
    }
}

bool cmp(node a, node b){
    string s1= a.nome.substr(3,(int)a.nome.size());
    string s2= b.nome.substr(3,(int)b.nome.size());
    if(s1==s2){
        return a.nome[0]<b.nome[0];
    }
    else{
        return s1<s2;
    }
}

void clean(){
    for(int i=0; i<=101; i++){
        g[i].clear();
        A[i].clear();
        dist[i]=inf;
        visited[i]=0;
    }
}

int main(){
    while (cin>>n and n)
    {
        clean();        
        if(t!=0) cout<< '\n';
        cout<< "Teste "<<++t<<'\n';
        //cout<< n<< endl;
        cin.ignore();
        map<string,int> m;
        vector<node> v;
	    ini=-1;
        for(int i=0; i<n;i++){
            getline(cin,linha);
			
            for(int j=0; j<(int)linha.size(); j++){
                if(linha[j]==',' or j== (int)linha.size()-1){
                    A[i].pb(palavra);
                    palavra.clear();
                }
                else if(palavra.size()){
                    palavra+=linha[j];
                }
                else if(linha[j]!=' '){
                    palavra+=linha[j];
                }
            }
            //cout<< "\n Autores: ";

            for(string s: A[i]){
                if(!m[s]){
                    m[s]=++k;
                    v.pb({s,m[s]});
                    //cout<< "s: "<<s << " m[s]: "<<m[s]<<endl;
                    if(s=="P. Erdos") ini=k;
                }
                //cout<< s << " * ";
            }
            for(int j=0; j<(int)A[i].size(); j++){
                string atual=A[i][j];
                for(string s: A[i]){
                    if(atual!=s){
                        g[m[atual]].pb(m[s]);
                    }
                }
            }
        }
        /*for(int i=1; i<=k; i++){
            cout<< i<< ": ";
            for(auto u: g[i]){
                cout<< u<< ' ';
            }
            cout<< endl;
        }*/
  	    if (ini>-1) 
		    bfs();
        sort(v.begin(),v.end(),cmp);
        for(auto x: v){
            if(x.nome!="P. Erdos")
                cout<< x.nome<<": "<<(dist[x.cod]==inf? "infinito": str(dist[x.cod]))<<'\n';
        }
        k=0;
    }
    return 0;
}