#include <bits/stdc++.h>

using namespace std;


struct pais{
int num;
int ouro, prata,bronze;
};


int max_medals(pais p1,  pais p2){
if (p1.ouro != p2.ouro)
    return  p1.ouro>p2.ouro;
else if (p1.prata != p2.prata)
    return  p1.prata>p2.prata;
else if (p1.bronze != p2.bronze)
    return  p1.bronze>p2.bronze;
else
    return p1.num<p2.num;
}


int main(){
 
   
  int n,m,o,p,b;
   
  cin >> n >> m ;  
 
  vector <pais> V(n);

    for ( int k=0; k < n; k++)
        V[k].num=k+1;
 
   
  for ( int k=0; k < m; k++){
    cin >> o >> p >> b ;
    V[o-1].ouro++;
    V[p-1].prata++;
    V[b-1].bronze++;  
  }
   
   
  sort(V.begin(),V.end(),max_medals);

  for ( int k=0; k < n; k++)
    cout << V[k].num << " ";
return 0;
}