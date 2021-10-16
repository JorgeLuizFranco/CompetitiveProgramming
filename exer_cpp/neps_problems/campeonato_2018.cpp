#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
using namespace std;

string res(int n){
    switch (n)
    {
    case 4:
        return "oitavas";
        break;
    case 3:
        return "quartas";
        break;
    case 2:
        return "semifinal";
        break;
    default:
        return "final";
    }
}

int iku,ilu,x,m,ini,fim,j;
int main(){
    for (int i = 1; i <= 16; i++)
    {   
        cin>>x;
        if(x==1){
           iku=i; 
           //cout<< iku <<" iku " << endl;
        }
        else if(x==9){
            ilu=i;
            //cout<< ilu <<" ilu " << endl;
        }
    }
    ini=1; fim=16;
    while (1)
    {
        j++;
        m=(ini+fim)/2;
        if((iku<=m && ilu<=m) ||(iku>m && ilu>m)){
            if (iku<=m)
            {
                fim=m;
            }
            else
            {
                ini=m+1;
            }
        }   
        else{
            break;
        }
    }
    cout<< res(j);
    return 0;
}