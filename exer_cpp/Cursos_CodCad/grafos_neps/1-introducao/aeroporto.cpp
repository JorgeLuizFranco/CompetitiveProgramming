#include <bits/stdc++.h>

using namespace std;

struct aeroporto{
    int cont,cod;
};

aeroporto A[102];
int x,y,a,v,t=0;



bool cmp(aeroporto a, aeroporto b){
    if (a.cont == b.cont)
        return a.cod<b.cod;
    else 
        return a.cont> b.cont;
}

int main(){
    cin>> a >>v;
    while(a!=0 && v!=0){
        cout << "Teste "<< ++t << '\n';
        for (int i = 1; i <= a; i++)
        {
            A[i].cod=i;
        }
        for (int i = 1; i <=v; i++)
        {
            cin>>x >>y;
            A[x].cont++;
            A[y].cont++;
        }
        //for (int i = 1; i <= a; i++) printf("%d - (%d,%d) ",i,A[i].cod,A[i].cont);
        //cout << endl;
        sort(A+1,A+a+1,cmp);
        //for (int i = 1; i <= a; i++) printf("%d - (%d,%d) ",i,A[i].cod,A[i].cont);
        //cout << endl;
        cout<< A[1].cod;
        for (int i = 2; A[i].cont==A[1].cont; i++)
        {
            cout<<" " << A[i].cod;
        }
        cout<< '\n';
        for (int i = 1; i <=a; i++)
        {
            A[i].cont=0;
        }
        cin>> a >> v;
    }
    return 0;
}