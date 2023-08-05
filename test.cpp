#include <bits/stdc++.h>
using namespace std ;

class Node
{
public:
    int data;
    Node *right;
    Node *left;
    Node(int a)
    {
        data = a;
        right = NULL;
        left = NULL;
    }

    void insertElimentInBST(int val){
         Node *prev = NULL;
         Node *curr = this;
             while (curr != NULL)
        {
            if (val == curr->data)
            {
                cout << "already " << val << " is in this BST" << endl;
                return;
            }
            else if (val < curr->data)
            {   
                prev = curr;
              curr = curr->left;
            }
            else if (val > curr->data)
            {   
                prev = curr;
                curr = curr->right;
            }
        }
        if (curr == NULL)
        {
            if (val < prev->data)
            {
                prev->left = new Node(val);
            }
            else if (val > prev->data)
            { 
                prev->right = new Node(val);  
            }
        }
        
    }
};

bool isBST (Node* root){
    if(root->right == NULL && root->left == NULL){
        return true;
    }

    if ((root->right->data < root->data && root->right != NULL) || (root->left->data > root->data && root->left != NULL)){
        return false;
    }
    if ((root->right->data > root->data && root->right != NULL) || (root->left->data < root->data && root->left != NULL)){
        
    }
    // if(root->right != NULL){
    //   bool is = isBST(root->right);
    //   return  is;
    // }
    // if(root->left != NULL){
    //   bool is = isBST(root->left);
    //   return  is;
    // }
}

 int main() {
    Node* a1 = new Node(5);
    a1->insertElimentInBST(3);
    a1->insertElimentInBST(4);
    a1->insertElimentInBST(2);
    a1->insertElimentInBST(8);
    a1->insertElimentInBST(7);
    a1->insertElimentInBST(6);
      bool i = isBST(a1);
      cout << i << endl;
  
   return 0 ;
}