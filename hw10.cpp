#include <iostream>
using namespace std;

typedef struct node{
  int value;
  struct node* right;
  struct node* left;
}node;

node* create(int i);

void add(node* root, node* b);

void print(node* curB);

void printReturn(node* curB);

node* create(int i){
  node* b = new node();
  b->value = i;
  b->left = NULL;
  b->right = NULL;
  return b;
}

void add(node* root, node* b){
  if(b->value < root->value){
    if(root->left == NULL){ 
      root->left = b;
    }else{ 
      add(root->left, b);
    }
  }else{
    if(root->right == NULL){
      root->right = b;
    }else{
      add(root->right, b);
    }
  }
}

void print(node* curB){
  if(curB->left != NULL){
    print(curB);
  }
  cout << curB->value << endl;
  if(curB->right != NULL){
    print(curB);
  }
}

void printReturn(node* curB){
  if(curB->right != NULL){
    print(curB);
  }
  cout << curB->value << endl;
  if(curB->left != NULL){
    print(curB);
  }
}

int main(){
  int a[7] = {-3, 1, -5, 42, 2, -6, 8};
  node* root = create(0);
  for(int i = 0; i < 7; i++){
    node* el = create(a[i]);
    add(root, el);
  }
  cout << "Tree:" << endl;
  print(root);
  return 0;
}
