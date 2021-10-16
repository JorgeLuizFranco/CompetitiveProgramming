#include<bits/stdc++.h>

using namespace std;

int t,n,ans;
char c;

void op(int x, char op){
    if(op=='+'){
        ans+= x;
    }
    else{
        ans-=x;
    }
}

int main(){
    while(cin>>n and n){
        string line;
        //line+='+';
        cin>>line;
         line+='+';
        int idx=0,k;
        char sign='+';
        for(int i=0; i<(int)line.size(); i++){             
            if(line[i]=='+' or line[i]=='-'){
                string s;
                k=i;
                for(int j=idx; j<k; j++){
                    s+=line[j];
                }
                op(stoi(s),sign);   
                sign=line[i];
                idx=k+1;
                n--;
            }
            
        }
        cout<< "Teste "<<++t<<'\n'<<ans<<'\n'<<'\n';
        ans=0;
    }
    return 0;
}