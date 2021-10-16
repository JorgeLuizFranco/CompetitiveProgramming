#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
using namespace std;

char M[102][102][2];

string linha;

int h[2],n,m;

int main(){_
    cin>>n;
    cin>>m;
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        getline(cin,linha);
        for (int j = 1; j <= m; j++)
        {
            M[i][j][0]=linha[j-1];
            if(M[i][j][0]=='o'){
                h[0]=i; 
                h[1]=j;
            }
        }
    }
    int i,j;
    while(1){ //true
        i=h[0],j=h[1];
        if(M[i+1][j][0]=='H' && !(M[i+1][j][1])){
            h[0]=i+1;
            M[i+1][j][1]= 'v'; 
        }
        else if(M[i][j+1][0]=='H' && !(M[i][j+1][1])){
            h[1]=j+1;
            M[i][j+1][1]= 'v'; 
        }
        else if(M[i][j-1][0]=='H' && !(M[i][j-1][1])){
            h[1]=j-1;
            M[i][j-1][1]= 'v'; 
        }
        else if(M[i-1][j][0]=='H' && !(M[i-1][j][1])){
            h[0]=i-1;
            M[i-1][j][1]= 'v'; 
        }
        else{
            cout<< h[0] << ' '<< h[1]; return 0; //saio do programa
        }
    }
    // como todas as entradas são 
    // soluções possíveis, o programa
    // já irá ter terminado no return acima
    return 0; 
}