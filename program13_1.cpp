//Write a program to implement all the tree traversal methods using classes//
#include<iostream>
#include<bits/stdc++.h>
using namespace std ;
class Node
{
public :   
  int Key;
  Node *left;
  Node *right;

  Node (int k) 
  {
    Key = k;
    left = right = NULL;
  }
};

void inorder(Node *root)
{
  if(root != NULL)
  {
    inorder(root ->left);
    cout << (root ->Key)<<" ";
    inorder (root->right);
  }
}

void preorder(Node *root)
{
  if(root != NULL)
  {
    cout << (root ->Key)<<" ";
    preorder(root ->left);
    preorder (root->right);
  }
}

void postorder(Node *root)
{
  if(root != NULL)
  {
    postorder(root ->left);
    inorder (root->right);
    cout << (root ->Key)<<" ";
  }
}

int main()
{
  Node *root = new Node(71);
  root->left = new Node(72);
  root->right = new Node(73);
  root->left->right = new Node(74);


  cout << "\ninorder tree traversal of binary tree is : \n";
	inorder(root);

  cout << "\nPreorder tree traversal of binary tree is : \n";
	preorder(root);

  cout << "\nPostorder tree traversal of binary tree is : \n" ;
	postorder(root);

  cout<<endl;
}