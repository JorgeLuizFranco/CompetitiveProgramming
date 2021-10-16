#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define fs first
#define sc second
#define pb push_back

using namespace std;

vector<int> v[1001];
int componente[1001],n,d,x,y,dist_2,cont;
pair<int,int> a[1001];


void bfs(){
    int no=1,x;
    queue <int> q;
    q.push(no);
    while(q.size()){
        cont++;
        no=q.front();
        q.pop();
        for(int i=0; i<v[no].size();i++){
            x=v[no][i];
            if(componente[x]==0){
                componente[x]=1;
                q.push(x);
            }
        }
    }
}
int main(){_
    cin>> n >> d;
    for (int i = 1; i <=n; i++)
    {
        cin>> a[i].first >> a[i].second;
    }
    for (int i = 1; i <=n; i++)
    {
        for (int j = i+1; j <=n; j++)
        {
            if(i!=j){    
                dist_2= (a[j].fs-a[i].fs)*(a[j].fs-a[i].fs)+(a[j].sc-a[i].sc)*(a[j].sc-a[i].sc);
                if(dist_2<=d*d){
                    v[i].pb(j);
                    v[j].pb(i);
                }
            }
        }
    }
    bfs();
    cout<< ((cont-1==n)?'S':'N');
    return 0;
}