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

int n,v[maxn],ans_a,ans_b;

int main(){_
    for(int i=4; i<=13; i++){
        v[i]=i;
    }
    swap(v[11],v[12]);
    v[1]=14;
    v[2]=15;
    v[3]=16;
	cin>>n;
    while(n--){
        int ar[3],br[3];
        cin>>ar[0]>>ar[1]>>ar[2]>>br[0]>>br[1]>>br[2];
        int a=0,b=0;
        for(int i=0; i<3; i++){
            //cout<<ar[i]<<' '<<br[i]<<endl;
            v[ar[i]]>=v[br[i]]? a++ : b++;
        }
        //cout<< "a b: "<< a << ' '<<b<<endl;
        a>=b? ans_a++ : ans_b++;
    }
    cout<< ans_a<<' '<<ans_b;
	return 0;
}