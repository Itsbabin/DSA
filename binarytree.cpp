#include <bits/stdc++.h>
using namespace std ;

    //creation of node class
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
    void PreOrderTraversal(){
        if(this != NULL){
            cout << this->data << " ";
            this->left->PreOrderTraversal();
            this->right->PreOrderTraversal();
        }
     }
    void PostOrderTraversal(){
        if(this != NULL){
            this->left->PostOrderTraversal();
            this->right->PostOrderTraversal();
            cout << this->data << " ";
        }
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
       /*   1
           / \
          2   3
         /\   /\
        4  5 6  NULL */
    a1->left = a2;
    a1->right = a3;
    a2->left = a4;
    a2->right = a5;
    a3->right = a6;
    
    a1->PreOrderTraversal();
        cout << endl;
    a1->PostOrderTraversal();
        cout << endl;
    a1->InOrderTraversal();

     return 0 ;
}