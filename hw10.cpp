#include <iostream>
using namespace std;

typedef struct node{
  int value;
  node* right;
  node* left;
}node;

node* create(int i);

void add(node* rot, node* b);

void print(node* curB);

void printReturn(node* curB);

node* create(int i){
  node* b = new node();
  b->value = i;
  b->left = nullptr;
  b->right = nullptr;
  return b;
}

void add(node* rot, node* b){
  if(b->value > rot->value){
    if(rot->right == nullptr){ 
      rot->right = b;
    }else{ 
      add(rot->right, b);
    }
  }else{
    if(rot->left == nullptr){
      rot->left = b;
    }else{
      add(rot->left, b);
    }
  }
}

void print(node* curB){
  if(curB->left != nullptr){
    print(curB->left);
  }
  cout << curB->value << endl;
  if(curB->right != nullptr){
    print(curB->right);
  }
}

void printReturn(node* curB){
  if(curB->right != nullptr){
    print(curB->right);
  }
  cout << curB->value << endl;
  if(curB->left != nullptr){
    print(curB->left);
  }
  //cout << curB->value << endl;
}

int main(){
  int a[4] = {1, 5, 4, 3};
  node* rot = create(2);
  for(int i = 0; i < 4; i++){
    node* el = create(a[i]);
    add(rot, el);
  }
  cout << "Tree:" << endl;
  //print(rot);
  printReturn(rot);
  return 0;
}
