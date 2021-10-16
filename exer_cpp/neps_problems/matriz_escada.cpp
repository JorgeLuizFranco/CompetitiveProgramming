
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

int n, m, v[1009][1009], passou[1009], ok, k;

int main(){_
    cin >> n >> m;
    ok = 1;
    for (int i = 1; i <= n; i++)
    {
        int x = 0; k = 0;
        for (int j = 1; j <= m; j++)
        {
            cin >> v[i][j];
            k += v[i][j];
            if (passou[0] && v[i][j]) ok = 0;
            if (passou[j] && v[i][j]) ok = 0;
            if (v[i][j] && !x)
            {
                passou[j] = 1;
                x = 1;
            }
        }

        if (!k) passou[0] = 1;
    }
    cout << (ok ? 'S' : 'N') << endl;
    return 0;
}