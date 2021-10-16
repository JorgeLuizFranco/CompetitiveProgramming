#include <bits/stdc++.h>

using namespace std;

const int maxn = 204;

int cont=0;


map <string,int> var;

map <string,int> ::iterator it;
int M[maxn][maxn];
int qtd_var[maxn],S[maxn],valor[maxn];

string nome[maxn];
vector <pair<int,int>> ordem;
vector <pair<int,int>>::iterator it2;

int main()
{
	int l, c,pos;
	string v;
	
	cin >> l>>c;

	
	for(int i=0;i<l;i++){
		for (int j=0;j<c;j++){
			cin>> v;
			if (var.count(v))
				pos = var[v];
				
			else {
				cont++;
				var[v] = cont;
				pos = cont;
				
				
				nome[cont]=v;
			}   	
			M[i][pos] ++;
			if (M[i][pos]==1) qtd_var[i]++;
			M[l+j][pos]++;	
			if (M[l+j][pos]==1) qtd_var[l+j]++;			
		}
		cin >> S[i];			 
	}
	for (int j=l;j<l+c;j++)
		cin >> S[j];
	for (int j=0;j<l+c;j++)
	{
		pair <int,int> p;
		p.first = qtd_var[j];
		p.second=j;
		ordem.push_back(p);
	}
	sort(ordem.begin(), ordem.end());
	
	for(it2=ordem.begin(); it2!=ordem.end(); it2++){
		int linha = (*it2).second;		
		int j=0;
		while (j<=cont && M[linha][j]==0) j++;
		if (j<=cont){
			valor[j] = S[linha]/M[linha][j];
		   // cout <<"j = "<<j<<" valor = "<<valor[j]<<endl;
			for (int i=0;i<l+c;i++){
				S[i]-= valor[j]*M[i][j];
				M[i][j]=0;
			}
		}
	}
  
		for(it=var.begin(); it!=var.end(); it++)
			cout << (*it).first << " "<< valor[(*it).second] <<"\n";
		//		cout << nome[i]<<" "<<valor[i]<<endl;
	return 0;
}
	
	
	


	
	