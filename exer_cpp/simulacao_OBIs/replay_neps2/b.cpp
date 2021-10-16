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

string s;
int n;

bool cmp(char a, char b){
    if((a=='J' and b=='O')){
        return true;
    }
    else if(a=='O' and b=='J'){
        return false;
    }
    return a>b;
}

int main(){_
    cin>>n;
    cin>>s;
    sort(all(s),cmp);
    cout<< s<<'\n';
	return 0;
}