#include <bits/stdc++.h>

using namespace std;

int L,C,A[105][105],P,cb;
stack <int> Px,Py;

void posiciona(int x,int y){
	if(A[x][y] == 0 && x>0 && y>0 && x<=L && y<=C)
	{
		if (A[x+1][y] != 'B' && A[x-1][y] != 'B' && A[x][y+1] != 'B' && A[x][y-1] != 'B')
		{			
			A[x][y]='B';
			cb++;
		}
	}
	
}

int main(){
    int x,y,i;
    
    cin >> L>>C;
	cin >> P;
	
	for (i=0;i<P;i++){
		cin >> x>>y;
		A[x][y]='P';
		Px.push(x);
		Py.push(y);
	}
	
	while (!Px.empty()){
		x=Px.top();Px.pop();
		y=Py.top();Py.pop();
		posiciona(x,y+1);
		posiciona(x,y-1);
		posiciona(x-1,y);
		posiciona(x+1,y);		
	}	


	cout << cb;	
  return 0;
}
