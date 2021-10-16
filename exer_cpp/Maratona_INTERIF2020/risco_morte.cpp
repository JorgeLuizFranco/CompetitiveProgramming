#include <bits/stdc++.h>

using namespace std;

/*char velha[3][3];
string x,o,jog_x,jog_o;
int cont_x,cont_o;*/

int main(){
    char a,b;
    int c,d;
    cin>> a >>c >>b >>d;
    float soma=0;
    if(a=='H' ){
        soma= 2000000*58/100.0;
    }
    else{
        soma= 2000000*42/100.0;
    }
    if(c>=70){
        soma+=2000000*25/100.0;
    }
    else if(c>=60){
        soma+= 2000000*24/100.0;
    }
    else if(c>=50){
        soma+= 2000000*20/100.0;
    }
    else if(c>=40){
        soma+= 2000000*15/100.0;
    }
    else if(c>=30){
        soma+= 2000000*10/100.0;
    }
    else if(c>=15){
        soma+= 2000000*5/100.0;
    }
    else {
        soma+= 2000000*1/100.0;
    }
    if(b=='P'){
        soma+= 2000000*50/100.0;
    }
    else if(b=='B'){
        soma+= 2000000*36/100.0;
    }
    else{
        soma+=2000000*14/100.0;
    }
    if(d<=3000){
        soma+=2000000*66/100.0;
    }
    else if(d<=6500){
        soma+=2000000*21/100.0;
    }
    else{
        soma+=2000000*13/100.0;
    }
    cout<< soma<<'\n';
    return 0;
}