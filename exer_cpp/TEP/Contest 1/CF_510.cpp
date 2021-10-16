#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define pq priority_queue
#define sc second
#define ub upper_bound
#define print(x) for(int wx=0; wx<sz(x); wx++) cout<< x[wx]<< ' ';
#define lb lower_bound
#define ll long long
#define str(x) to_string(x)
#define sz(x) (int)x.size()
#define all(x) x.begin(),x.end()
#define iii tuple<int,int,int>
#define pii pair<int,int>
#define maxn 2*(int)1e5
#define inf 0x3f3f3f3f
using namespace std;

vector<int> g[maxn],ans;
queue<int> q;
int n,indegree[maxn];
string words[maxn];

void bfs(){
    while(!q.empty()){
        int no=q.front(); q.pop();
        ans.pb(no);
        for(int u: g[no]){
            indegree[u]--;
            if(!indegree[u]){
                q.push(u);
            }
        }
    }
}

int main(){_
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>words[i];
    }
    for(int i=1; i<n; i++){
        string word1=words[i],word2=words[i+1];
        int len=min(sz(word1),sz(word2)),j;
        for(j=0; j<len; j++){
            if(word1[j]!=word2[j]){
                g[word1[j]-'a'].pb(word2[j]-'a');
                indegree[word2[j]-'a']++;
                break;
            }
        }
        if(j==len){
            if(sz(word1)>sz(word2)){
                cout<<"Impossible\n";
                return 0;
            }
        }
    }
    for(int i=0; i<26; i++){
        if(!indegree[i]) q.push(i);
    }
    bfs();
    if(sz(ans)<26){
        cout<<"Impossible\n"; return 0;
    }
    for(auto u: ans){
        cout<<char(u+'a');
    }
    cout<<'\n';
	return 0;
}