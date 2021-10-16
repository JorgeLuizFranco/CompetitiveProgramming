#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
using namespace std;

struct piloto
{
    int cod,pont;
};

bool cmp(piloto a, piloto b){
    if(a.pont == b.pont){
        return a.cod < b.cod;
    }
    return a.pont > b.pont;
}
bool cmp_cod(piloto a, piloto b){
    return a.cod < b.cod;
}
piloto P[102];

int placar[102][102];

int g,p,s,t,x,pos_chegada;
int main(){_
    cin>> g >> p;
    for (int j = 1; j <=101; j++){
        P[j].cod=j;
    }
 
    while(g!=0){
        for(int i=1; i<=g; i++){
            for(int j=1; j<=p; j++){
                cin>> pos_chegada; 
                placar[i][pos_chegada] = j;
            }
        }
        cin>> s;
        for (int i = 1; i <= s; i++){ 
            cin>> t;
            for (int j = 1; j<=t; j++)
            {
               cin>>x;
               for (int k = 1; k <= g; k++)
               {
                   P[placar[k][j]].pont +=x;
               }
            } 

            sort(P+1,P+p+1,cmp);
            cout<< P[1].cod ;
            for (int j = 2; j <= p; j++)
            {
                if(P[j].pont != P[1].pont){
                    break;
                }
                cout<< ' ' << P[j].cod ;
            }
            for (int j = 1; j <=p; j++){
                P[j].pont=0;
            }
            cout << endl;
            sort(P+1,P+p+1,cmp_cod);
        }
        /*for (int i = 1; i <= p; i++)
            {
                cout<< ' ' << P[i].cod << ' '<< P[i].pont << '\n';
            }*/
        cin>> g >>p;
    }
    return 0;
}