#include<bits/stdc++.h>
#define par pair<int,int>
#define fs first
#define sc second
#define fim '\0'
#define fogo -1
#define str(x) to_string(x)
#define pb push_back
using namespace std;

char v[1006][1006];
int h,w,t,dist,visitado[1006][1006];
vector<pair<par,int>> aux;

void limpa(){
    for(int i=0; i<=h+3; i++){
        for(int j=0; j<=w+3; j++){
            visitado[i][j]=0;
            v[i][j]=fim;
        }
    }
}

int bfs(){
    queue<pair<par,int>> q;
    for(auto x: aux){
        q.push(x);
    }
    while (!q.empty())
    {
        int i=q.front().fs.fs,j=q.front().fs.sc,cont=q.front().sc; q.pop();
        for(int x: {-1,1}){
            if(v[i+x][j]== fim and cont!=fogo){
                return cont+1;    
            }
            else if(v[i+x][j]=='.' and !visitado[i+x][j]){
                visitado[i+x][j]++;
                if(cont!=fogo){
                    q.push({{i+x,j},cont+1});
                }
                else{
                    q.push({{i+x,j},fogo});
                }
            }
        }
        for(int y: {-1,1}){
            if(v[i][j+y]== fim and cont!=fogo){
                return cont+1;
            }
            else if(v[i][j+y]=='.' and !visitado[i][j+y]){
                visitado[i][j+y]++;
                if(cont!=fogo){
                    q.push({{i,j+y},cont+1});
                }
                else{
                    q.push({{i,j+y},fogo});
                }
            }
        }
    }
    return fogo;
}

int main(){
    cin>> t;
    while (t--)
    {
        cin>> w >>h;
        int idx;
        for(int i=2; i<=h+1; i++){
            for(int j=2; j<=w+1; j++){
                cin>>v[i][j];
                if(v[i][j]=='@'){
                    aux.pb({{i,j},0});
                    idx=aux.size()-1;
                }
                else if(v[i][j]=='*'){
                    aux.pb({{i,j},fogo});
                }
            }
        }
        swap(aux[idx],aux[aux.size()-1]);
        dist=bfs();
        cout<< (dist!=fogo? str(dist): "IMPOSSIBLE")<< '\n';
        limpa();
        aux.clear();
    }
    return 0;
}