#include <bits/stdc++.h>

using namespace std;

int i,n,resp,Ri,PSA[100005],A[100005],Rmax;

int main(){
    
    cin >> n;
    
	for (i=0;i<n;i++){
		cin >> Ri;
		A[Ri]++;
		Rmax=max(Ri,Rmax);
	}

	for (i=Rmax;i>0;i--){
		PSA[i]=PSA[i+1]+A[i];
	}

	i=n;
	while (i>=PSA[i]) 	i--;

	cout << i+1; 
	
  return 0;
}
