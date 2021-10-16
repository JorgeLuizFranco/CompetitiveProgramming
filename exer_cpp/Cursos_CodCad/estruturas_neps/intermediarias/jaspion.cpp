#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

vector<string> split(const string& str, const string& delim)
{
    vector<string> tokens;
    size_t prev = 0, pos = 0;
    do
    {
        pos = str.find(delim, prev);
        if (pos == string::npos) pos = str.length();
        string token = str.substr(prev, pos-prev);
        if (!token.empty()) tokens.push_back(token);
        prev = pos + delim.length();
    }
    while (pos < str.length() && prev < str.length());
    return tokens;
}
int main(){_
    int t,n,m;
    cin>>t;
    while (t--)
    {
        map<string,string> d;
        cin >> m >>n;
        cin.ignore();
        while (m--)
        {
            string jap,port;
            getline(cin,jap);
            getline(cin,port);
            d[jap]=port;
        }
        while (n--)
        {
            string pl,res;
            getline(cin,pl);
            vector<string> vpalavra= split(pl," ");
            for(string palavra: vpalavra){
                if(d.count(palavra)){
                    res+= d[palavra]+' ';
                }
                else{
                    res+= palavra + ' ';
                }
            }
            res[res.size()-1]='\n';
            cout<< res;
        }
        cout<< '\n';
    }
    return 0;
}