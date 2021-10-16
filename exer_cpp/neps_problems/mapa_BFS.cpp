#include <bits/stdc++.h>
#define pb push_back
#define fs first
#define sc second

using namespace std;
vector<vector<char>> v;
int visitado[100][100],n,m,ini[2];
char no;

bool ti(int ind, int x){
    return ((ind+x)>=0  and (ind+x)<n);
}

bool tj(int ind, int x){
    return ((ind+x)>=0 and (ind+x)<m);
}

pair<int,int> bfs(int x, int y){
    int i=x,j=y;
    queue<pair<int,int>> q;
    q.push({i,j});
    while (!q.empty())
    {
        i=q.front().fs,j=q.front().sc;
        q.pop();
        for(int x: {-1,1}){
            if(ti(i,x) and !visitado[i+x][j] and v[i+x][j]=='H'){
                q.push({i+x,j});
                visitado[i+x][j]++;
            }
            if(tj(j,x) and !visitado[i][j+x] and v[i][j+x]=='H'){
                q.push({i,j+x});
                visitado[i][j+x]++;
            }
        }
    }
    return {i,j};
}

int main(){
    cin>> n >>m;
    for(int i=0;i<n;i++){
        vector<char> c;
        for(int j=0;j<m;j++){
            cin>> no;
            c.pb(no);
            if(no=='o'){
                ini[0]=i,ini[1]=j;
            }
        }
        v.pb(c);
    }
    auto ans= bfs(ini[0],ini[1]);
    cout<< ans.fs+1 << ' '<< ans.sc+1;
    return 0;
}