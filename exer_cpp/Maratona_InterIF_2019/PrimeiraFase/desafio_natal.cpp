#include <bits/stdc++.h>
#define pb push_back
using namespace std;

vector <int> v[1010];
int N[1010] ,usou[1010],maior,soma[1010];

void dfs(int no, int sum){
	sum+=N[no];
	if(v[no].empty()){
		maior= max(maior,sum);
	}
	else{
		if (!soma[no]) 
		{	dfs(v[no][0],sum);
		 	dfs(v[no][1],sum);
		}
		else 
	}
}

int main(){
	int n,i,j,atual,anterior;
	cin >> n;
	anterior=1;
	cin >> N[1];	
	atual = 2;
	for (i=2;i<=n;i++){
		for (j=1;j<=i;j++){	
		  cin >> N[atual];
		  v[anterior].push_back(atual);
		  if (j>1 and j<i){
		  	  v[anterior+1].push_back(atual);
 		  	  usou[anterior+1]++;
		  }
		  
		  if (usou[anterior]){
			  //usou = 0;
			  anterior++;			  
		  }
		  else{
			  usou[anterior]++;
		  }

		  atual++; 
		  //anterior++;			
		  
		}
	}
	
	/*for (i=1;i<=anterior-1;i++){
		cout << "\n"<<i<<" "<<N[i]<<" -> ";
		for (int x:v[i]){
			cout << x<<" ";
		}
	}*/
	dfs(1,0);
	cout<<maior;
	return 0;
}	 


