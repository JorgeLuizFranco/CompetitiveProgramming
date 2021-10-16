#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define sc second
#define str(x) to_string(x)
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define maxn 2*(int)1e5
#define inf 0x3f3f3f3f
using namespace std;

int n,ini=-1,in[1000][1000],memo[1000][1000];
pii g[200][200][3];

int dfs(pii no){
    auto [i,j]=no;
    int w= in[i][j];
    //cout<< w<<endl;
    if(w==-1) return 0;
    pii a=g[i][j][1],b=g[i][j][2];
    if(memo[i][j]!=-1) return memo[i][j];
    return memo[i][j]=w+max(dfs(a),dfs(b));
}
/*5         7
          3   8
        8   1   0
      2   7   4   4
    4   5   2   6   5 
7
3 8
8 1 0
2 7 4 4
4 5 2 6 5*/
void read(){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            int x; cin>>x;
            //cout<< x << ' ';
            in[i][j]=x; 
        }
    }
}
//[7,3,8,8,1,0]
int main(){_
    memset(in,-1,sizeof(in));
    memset(memo,-1,sizeof(memo));
    cin>>n;
    read();
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            //cout<< "i: "<<i<<" j: "<<j<<endl; 
            //cout<< in[i][j]<< ' ';
            for(int k=1; k<=2; k++){
                //cout<< "->"<<in[i+1][j+k-1];
                g[i][j][k]= {i+1,j+k-1};
            }
            //cout<<endl;
        }
        //cout<< endl;
    }
    //cout<< ini<<endl;
    cout<< dfs(pii(1,1));
	return 0;
}