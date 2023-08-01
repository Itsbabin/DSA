#include <bits/stdc++.h>
using namespace std ;
    //////// BST stands for Binary Search Tree : //////////
     /* 1. BST 's left side sub tree have every node 
          smaller than root.
        2. BST 's right side sub tree have every node 
          larger than root.
        3. every subtree should be BST also.   */
       
       //creating Node class for node data type
  class Node
    {
    public:
        int data;
        Node* right;
        Node* left;
     Node(int a){
        data = a;
        right = NULL;
        left = NULL;
     }

    void InOrderTraversal(){
        if(this != NULL){
            this->left->InOrderTraversal();
            cout << this->data << " ";
            this->right->InOrderTraversal();
        }
     }
    };

 int main() {
    
    Node* a1 = new Node(1);
    Node* a2 = new Node(2);
    Node* a3 = new Node(3);
    Node* a4 = new Node(4);
    Node* a5 = new Node(5);
    Node* a6 = new Node(6);
    Node* a7 = new Node(7);
    Node* a8 = new Node(8);
    
    /*
                4
              /  \
             2    6
           / \   / \
          1   3 5   8
                   /
                  7
    */

   //linking nodes of BST
    a4->left = a2;
    a4->right = a6;
    a2->left = a1;
    a2->right = a3;
    a6->left = a5;
    a6->right = a8;
    a8->left = a7;

    /* InOrder traversal of a BST is sorted list of 
            value in assending order  */
    a4->InOrderTraversal();
    
     return 0 ;
}