#include <bits/stdc++.h> 
#define fs first
#define sc second
using namespace std;

char cx,cfx;
int x,y,fx,fy,v[12][12];

int bfs(int i,int j,int fi, int fj){
    int cont=0;
    queue<pair<pair<int,int>,int>> q;
    q.push({{i,j},cont});
    while (!q.empty())
    {
        i= q.front().fs.fs,j=q.front().fs.sc,cont=q.front().sc+1;
        q.pop();
        for(int ti: {-2,2}){
            for(int tj : {-1,1}){
                //cout<< i+ti << ' ' << j+tj << '\n';
                if(i+ti==fi and j+tj== fj){
                    return cont;
                }
                else if(v[i+ti][j+tj]){
                    q.push({{i+ti,j+tj},cont});
                }
            }
        }
        for(int tj: {-2,2}){
            for(int ti : {-1,1}){
                if(i+ti==fi and j+tj== fj){
                    return cont;
                }
                else if(v[i+ti][j+tj]){
                    q.push({{i+ti,j+tj},cont});
                }
            }
        }
    } 
    return cont;   
}

int main(){
    for(int i=2; i<10; i++){
            for(int j=2; j<10; j++){
                v[i][j]=1;
            }
        }
    while(cin>> cx >>y){
        x= cx-'a'; x+=1;
        cin>> cfx >> fy;
        fx= cfx-'a'; fx+=1;
        //cout<< x << ' '<< y << ' '/*<<lixo<<' '*/ << fx << ' ' << fy << '\n';
        //cout<< "\n entrou";
        if(x==fx and y==fy){
            cout<< "To get from "<<cx<<y<< " to "<<cfx<<fy<<" takes "<<0<< " knight moves.\n";
        }
        else{
            cout<< "To get from "<<cx<<y<< " to "<<cfx<<fy<<" takes "<<bfs(x+1,y+1,fx+1,fy+1)<< " knight moves.\n"; 
        }
    }
    return 0;
}