#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define sc second
#define str(x) to_string(x)
#define pii pair<int,int>
#define maxn 2*(int)1e5
#define inf 0x3f3f3f3f
using namespace std;

int n,m,t,s1,s2;

bool cmp(pair<int,string> a , pair<int,string> b){
    if(a.fs==b.fs){

        return a.sc>b.sc;
    }
    else{
        return a.fs<b.fs;
    }
}

int main(){_
    while (cin>>n and n)
    {
        if(t!=0) cout<<'\n';
        cout<< "Teste "<<++t<<'\n';
        vector<pair<int,string>> ranki;
        for(int i=0; i<n; i++)
        {
            string nome; cin>>nome; 
            ranki.pb({0,nome});
            int v[12],maior=-1,menor=inf;
            for(int j=0; j<12; j++){
                cin>>v[j];
                if(maior<v[j]){
                    maior=v[j];
                }
                if(menor>v[j]){
                    menor=v[j];
                }
            }
            for(int j=0; j<12; j++){
                //cout<< v[j]<<' ';
                ranki[i].fs+=v[j];
            }
            ranki[i].fs-=(maior+menor);
            //cout<< "\n\n";
        }
        sort(ranki.begin(),ranki.end(),cmp);
        int tam=ranki.size();
        int ant=-1,id_ant=0;
        for(int i=tam-1; i>=0;i--){
            if(ranki[i].fs!=ant){
                cout<< tam-i<<' '<< ranki[i].fs<<' '<< ranki[i].sc<<'\n';
                ant=ranki[i].fs,id_ant=tam-i;
            }
            else
                cout<< id_ant<<' '<< ranki[i].fs<<' '<< ranki[i].sc<<'\n';
        }
    }
    return 0;
}