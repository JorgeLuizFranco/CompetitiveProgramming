#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int data;
    Node *left, *right,*pai;
};
 
struct Node* newNode(int data)
{
    struct Node* node = new Node;
    node->data = data;
    node->pai=node->left = node->right = NULL;
 
    return (node);
}



  int cont;
  Node *pont[50005];
  set <int> S;
 
int height(Node* root, int& ans)
{
    if (root == NULL)
        return 0;
 
    int left_height = height(root->left, ans);
 
    int right_height = height(root->right, ans);

    ans = max(ans, 1 + left_height + right_height);
 
    return 1 + max(left_height, right_height);
}

int diameter(Node* root)
{
    if (root == NULL)
        return 0;
 
    // Variable to store the final answer
    int ans = INT_MIN;
 
    int height_of_tree = height(root, ans);
    if (height_of_tree<-30) cout<<"";
    return ans; 
}
 

void percorre(int i, int D){
  S.insert(i);  
  if (pont[i]==NULL) return;
  if (D==1){
    if (pont[i]->left!=NULL) 
      if (S.count(pont[i]->left->data)<1) {cont++; S.insert(pont[i]->left->data);}
    if (pont[i]->right!=NULL) 
      if (S.count(pont[i]->right->data)<1) {cont++;S.insert(pont[i]->right->data);}
    /*if (pont[i]->pai!=NULL) 
      if (S.count(pont[i]->pai->data)<1) {cont++;S.insert(pont[i]->pai->data);}*/  
    return;
  }
  if (pont[i]->left != NULL){
    int x = pont[i]->left->data ;
    if (S.count(x)<1) percorre(x,D-1);
  }
  if (pont[i]->right != NULL){
       int x = pont[i]->right->data ;
       if (S.count(x)<1)  percorre(x,D-1);
  }
  if (pont[i]->pai != NULL){
       int x = pont[i]->pai->data ;
       if (S.count(x)<1)  percorre(x,D-1);
  }
}

int main()
{
  int n,x,y;  
    
  
  cin>>n;   
  for (int i=1;i<=n;i++)  {  
      pont[i] = newNode(i);
    }
  for (int i=1;i<n;i++)  {
    cin >>x>>y;
    if (pont[x]->left ==NULL) { pont[x]->left = pont[y];
                  pont[y]->pai=pont[x];
    }
    else  if (pont[x]->right ==NULL) {pont[x]->right = pont[y];
                      pont[y]->pai=pont[x];;
    }
    else {
      pont[y]->right = pont[x];
          pont[x]->pai=pont[y];
    }
    
  }  
    int D=diameter(pont[1]);

   for (int i=1;i<=n;i++)  {
     S.clear();  

     percorre(i,D-1);  
   }
    printf("%d %d", D,cont);
  
 
    return 0;
}