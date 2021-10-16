#include <bits/stdc++.h>

using namespace std;



int main(){
    int n,soma,j,x;
    string linha;
    vector<int> v;
    cin>>n;
    cin.ignore();
    while (n--)
    {
        soma=0;
        getline(cin,linha);
        for(int i=0; i<linha.size(); i++){
            if('0'<=linha[i] && linha[i]<='9'){
                x=linha[i]-'0';
                v.push_back(x);
                if('0'<=linha[i+1] && linha[i+1]<='9'){
                    x=linha[i+1]-'0';
                    v.push_back(x);
                    j=i+2;
                    while('0'<=linha[j] && linha[j]<='9'){
                        x=linha[j]-'0';
                        v.push_back(x);
                        j++;
                    }
                }
                for (int k = 0,t=v.size(); k < v.size(); k++)
                {
                    x=v[k]*pow(10,(t-k-1));
                    soma+= x;
                }
                i+=v.size();
                v.clear();
            }
        }
        cout<< soma<< endl;
    }
    return 0;
}