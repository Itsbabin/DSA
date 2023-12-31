#include <bits/stdc++.h>
using namespace std ;
// creating Node class for node data type
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

     void InOrderTraversal(){
        if(this != NULL){
            this->left->InOrderTraversal();
            cout << this->data << " ";
            this->right->InOrderTraversal();
        }
     }
};

int main()
{

    Node *a1 = new Node(15);
    /*          15
              /    \
            9      18
           / \    /  \
          5  10 17   20    */
    // linking nodes of BST
    a1->InOrderTraversal();
    cout << endl ;
    a1->insertElimentInBST(9);
    a1->insertElimentInBST(10);
    a1->insertElimentInBST(20);
    a1->insertElimentInBST(17);
    a1->insertElimentInBST(5);
    a1->insertElimentInBST(18);
    a1->InOrderTraversal();
     return 0 ;
}