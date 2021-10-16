#include <bits/stdc++.h>

using namespace std;



int main(){
    string s,ans="";
    int ok;
    while (getline(cin, s))
    {
        if (s == "    </body>") ok = 0;
        if (ok) ans+=s+'\n';
        if (s == "    <body>") ok = 1;
    }
    cout<< ans;
    return 0;
}