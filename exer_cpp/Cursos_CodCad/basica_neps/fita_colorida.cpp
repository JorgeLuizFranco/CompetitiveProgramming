#include <iostream>

using namespace std;

int main(){
    int n;
    int tam=0;
    cin >>n;
    int V[n];
    
    for (int i=0;i<n;i++){
        cin>> V[i];
            if(V[i]==0)
                tam++;
    }
    int P[tam];
    
    for(int i=0,cont=0;i<n;i++){
        if(V[i]==0){
            P[cont]=i;
            cont++;
        }
    }
   
    if (V[0]!=0)
        for(int i=0;i<P[0] ;i++){
            V[i]= P[0]-i;
            if(V[i]>9)
                V[i]=9;
        }
    if(V[n-1]!=0) 
        for(int j=n-1; j>P[tam-1];j--){
            V[j]= j-P[tam-1];
            if(V[j]>9)
                V[j]=9;
        }
    if(tam>1){
        for(int i=1;i<tam;i++){
          int med= (P[i-1]+P[i]+1)/2;
          for(int j=med;j>P[i-1] ;j--){
            if(V[j]!=0)
            V[j]= j-P[i-1];                                                    
            if(V[j]>9)
                V[j]=9;
            }
          for (int k=med; k<P[i];k++){
            if(V[k]!=0)
            V[k]= P[i]-k;
            if(V[k]>9)
                V[k]=9;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<< V[i] << " ";
    }

    return 0;
}