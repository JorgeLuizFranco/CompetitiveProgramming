#include <bits/stdc++.h>

using namespace std;

//se B for maior do que C e se D for maior do que A, e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem positivos e se a variável A for par

int main(){
    int a,b,c,d;
    cin>> a >>b >> c >>d;
    if(b>c and (d>a) and (c+d>b+a) and c>0 and d>0 and a%2==0){
        cout<< "Valores aceitos" << endl;
    }
    else{
        cout<< "Valores nao aceitos" << endl;
    }
}