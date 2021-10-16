#include <bits/stdc++.h>

using namespace std;

/*char velha[3][3];
string x,o,jog_x,jog_o;
int cont_x,cont_o;*/

int main(){
    char velha[3][3];
    string x,o,jog_x,jog_o;
    int cont_x=0,cont_o=0;
    getline(cin,x);
    for(int i=0; i<(int)x.size(); i++){
        if(x[i]==':'){
            for(int j=i+1; j<(int)x.size(); j++){
                jog_x+=x[j];
            }
            break;
        }
    }
    cin.ignore();
    getline(cin,o);
    for(int i=0; i<(int)o.size(); i++){
        if(o[i]==':'){
            for(int j=i+1; j<(int)o.size(); j++){
                jog_o+=o[j];
            }
            break;
        }
    }
    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
            cin>> velha[i][j];
        }
    }
    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
            if(velha[i][j]=='X'){
                cont_x++;
            }
            else{
                cont_o++;
            }
        }
        if(!cont_o){
            cout<< jog_x << " Ganhou\n";
            return 0;
        }
        else if(!cont_x){
            cout<< jog_o << " Ganhou\n";
            return 0;
        }
        cont_o=0; cont_x=0;
    }
    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
            if(velha[j][i]=='X'){
                cont_x++;
            }
            else{
                cont_o++;
            }
        }
        if(!cont_o){
            cout<< jog_x << " Ganhou\n";
            return 0;
        }
        else if(!cont_x){
            cout<< jog_o << " Ganhou\n";
            return 0;
        }
        cont_o=0; cont_x=0;
    }
    for(int i=0; i<3; i++){
        if(velha[i][i]=='X'){
            cont_x++;
        }
        else{
            cont_o++;
        }
    }
    if(!cont_o){
        cout<< jog_x << " Ganhou\n";
        return 0;
    }
    else if(!cont_x){
        cout<< jog_o << " Ganhou\n";
        return 0;
    }
    for(int i=0,j=2; i<3; i++,j--){
        if(velha[i][i]=='X'){
            cont_x++;
        }
        else{
            cont_o++;
        }
    }
    if(!cont_o){
        cout<< jog_x << " Ganhou\n";
        return 0;
    }
    else if(!cont_x){
        cout<< jog_o << " Ganhou\n";
        return 0;
    }
    cout<< "Empatou!\n";
    return 0;
}