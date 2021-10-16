#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
using namespace std;
string res;
map<string,string> d;
map<string,string>::iterator it;
int main(){
   int n,m;
   cin>> n;
   cin.ignore();
   while(n--){
       string key,val;
       getline(cin,key);
       getline(cin,val);
       d[key]=val;
   }
   cin>> m;
   cin.ignore();
  while (m--){
       string name,key;
       getline(cin,name);
       getline(cin,key);
       res+= name + '\n' + d[key] + "\n\n" ;
   }
     cout<< res;
    /*for (it = d.begin(); it != d.end(); it++){
        string v = it->first;
        string k = it->second;
        cout<< v << "   " << k;*/
                    //}
    return 0;
}