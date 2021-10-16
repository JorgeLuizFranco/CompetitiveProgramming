#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define pb push_back
#define fs first
#define sc second
#define pii pair<int,int>

using namespace std;

int n,maior,cont;
char v[104][104];
int main(){
    cin>>n;
    for(int i=2; i<=n+1; i++){
        for(int j=2; j<=n+1; j++){
            cin>>v[i][j];
        }
        //cout<< endl;
    }
    for(int i=2; i<=n+1; i++){
        //cout<< "i: "<<i<<endl;
        for(int j=2; j<=n+1; j++){
            //cout<< v[i][j]<< ' ';
            if(v[i][j]=='o'){
                //cout<< cont<< endl;
                cont++;
            }
            else if(v[i][j]=='A'){
                maior=max(cont,maior);
                cont=0;
            }
        }
        //cout<<endl;
        if(i<n+1){
            i++;
            //cout<< "i: "<< i<<endl;
        for(int j=n+1; j>=2; j--){
            //cout<< v[i][j]<< ' ';
            if(v[i][j]=='o'){
                cont++;
            }
            else if(v[i][j]=='A'){
               // cout<< "cont: "<<cont<<endl;
                //cout<< "maior: "<< maior;
                maior=max(cont,maior);
                cont=0;
            }
        }
        //cout<<endl;
        }
    }
    cout<< max(maior,cont);
    return 0;
}