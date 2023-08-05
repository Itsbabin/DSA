#include <bits/stdc++.h>
using namespace std;
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

    Node *getpre()
    {
        Node *succParent = this;
        Node *pre = this->left;
        while (pre->right != NULL)
        {
            succParent = pre;
            pre = pre->right;
        }
        return succParent;
    }

    void InOrderTraversal()
    {
        if (this != NULL)
        {
            this->left->InOrderTraversal();
            cout << this->data << " ";
            this->right->InOrderTraversal();
        }
    }
    Node *deleteNode(int val)
    {
        if (this == NULL)
        {
            return this;
        }
        if (val < this->data)
        {
            this->left = this->left->deleteNode(val);
            return this;
        }
        else if (val > this->data)
        {
            this->right = this->right->deleteNode(val);
            return this;
        }

            if (this->left == NULL)
            {
                Node *root = this;
                root = this->right;
                delete this->right;
                return root;
            }
            else if (this->right == NULL)
            {
                Node *root = this;
                root = this->left;
                delete this->left;
                return root;
            }
            else
            {
        Node* succParent = this;
 
        // Find successor
        Node* succ = this->right;
        while (succ->left != NULL) {
            succParent = succ;
            succ = succ->left;
        }
        if (succParent != this)
            succParent->left = succ->right;
        else
            succParent->right = succ->right;
 
        // Copy Successor Data to root
        this->data = succ->data;
 
        // Delete Successor and return root
        delete succ;
        return this;
    }
    }
};

int main()
{

    Node *a1 = new Node(1);
    Node *a2 = new Node(2);
    Node *a3 = new Node(3);
    Node *a4 = new Node(4);
    Node *a5 = new Node(5);
    Node *a6 = new Node(6);
    Node *a7 = new Node(7);
    Node *a8 = new Node(8);
    /*          4
              /  \
             2    6
           / \   / \
          1   3 5   8
                   /
                  7       */
    // linking nodes of BST
    a4->left = a2;
    a4->right = a6;
    a2->left = a1;
    a2->right = a3;
    a6->left = a5;
    a6->right = a8;
    a8->left = a7;

    a4->InOrderTraversal();
    cout << endl;
    a4 = a4->deleteNode(8);
    a4->InOrderTraversal();

    return 0;
}