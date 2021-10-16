#include <bits/stdc++.h>

using namespace std;

int cont=0;

int componente[50001];

vector<int> v[50001];

void bfs(int no){
    cont++;
    int viz;
    queue<int> q;
    q.push(no);
    while (q.size())
    {
        no= q.front();
        q.pop();
        componente[no]++;
        for (int i = 0; i < v[no].size(); i++)
        {   
            viz=v[no][i];
            if(componente[viz]==0){
                q.push(viz);
            }
        }
    }
}

int n,m,x,y;
int main(){
    cin>> n>> m;
    for (int i = 0; i < m; i++)
    {
        cin>> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1; i<=n;i++){
        if(componente[i]==0){
            bfs(i);
        }
    }
    cout<< cont;
    return 0;
}