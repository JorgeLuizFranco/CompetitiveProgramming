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

set<char> c={'a','e','i','o','u'};
string s,ans;

int main(){_
	cin>>s;
    for(int i=0; i<sz(s); i++){
        ans+=s[i];
        if(!c.count(s[i])){
            char j=s[i]+1,k=s[i]-1;
            for(; k>='a' or j<='z'; j++,k--){
                if((k!='w' and k!='y') and k>='a' and c.count(k)){
                    ans+=k; break;
                }
                if((j!='w' and j!='y') and j<='z' and c.count(j)){
                    ans+=j; break;
                }                        
            }
            if(s[i]=='z'){
                ans+='z'; continue;
            }
            for(char j=s[i]+1; j<='z'; j++){
                if(!c.count(j) and (j!='w' and j!='y')){ 
                    ans+= j; break;
                }
            }
        }
    }
    cout<<ans<<'\n';
	return 0;
}