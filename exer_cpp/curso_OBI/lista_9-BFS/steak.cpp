#include <bits/stdc++.h>
#define fs first
#define sc second
#define str(x) to_string(x)
using namespace std;

int n,m,k,t,ins,x,y,v[1004][1004],i,j,visitado[1004][1004];

void bfs(){
    int cont=0;
    queue<pair<pair<int,int>,int>> q;
    q.push({{i,j},cont});
    while (!q.empty())
    {
        i=q.front().fs.fs,j=q.front().fs.sc;
        cont= q.front().sc+1;
        q.pop();
            if(v[i-1][j]==1){
                i--;
                return;
            }
            else if(!visitado[i-1][j] and v[i-1][j]==2){
                visitado[i-1][j]++;
                q.push({{i-1,j},cont});
            }
            if(v[i][j-1]==1){
                j--;
                return;
            }
            else if(!visitado[i][j-1] and v[i][j-1]==2){
                visitado[i][j-1]++;
                q.push({{i,j-1},cont});
            }
            if(v[i][j+1]==1){
                j++;
                return;
            }
            else if(!visitado[i][j+1] and v[i][j+1]==2){
                visitado[i][j+1]++;
                q.push({{i,j+1},cont});
            }
            if(v[i+1][j]==1){
                i++;
                return;
            }
            else if(!visitado[i+1][j] and v[i+1][j]==2){
                visitado[i+1][j]++;
                q.push({{i+1,j},cont});
            }
    }
}

bool inicializar(){
    for(int w=1; w<=n+1;w++){
       for(int z=1; z<=m+1;z++)
            v[w][z]=2;
    }
    return true;
}
bool inicializar2(){
    for(int w=1; w<=n+1;w++){
       for(int z=1; z<=m+1;z++)
            visitado[w][z]=0;
    }
    return true;
}
int main(){
    
    while (cin>>n>>m and n+m and inicializar())
    {
        if(ins) cout<< '\n';
        string ans;
        cin>>k;
        while(k--){
            cin>>x>>y;
            v[x+1][y+1]=1;
        }
        cin>>t;
        ans+= "Instancia "+ str(++ins)+'\n';
        while (t--)
        {
            cin>> i >>j;++i;++j;
            if(v[i][j]!=1){
                bfs();
            } 
            ans+= str(--i)+' '+str(--j)+'\n';
        }
        cout<<ans;
        inicializar();
        inicializar2();
    }
    return 0;
}