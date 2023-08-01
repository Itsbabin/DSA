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

    void IterativeSearchInBST(int key)
    {
        Node *prv = this;
        while (prv != NULL)
        {
            if (key == prv->data)
            {
                cout << "yes " << key << " is in this BST" << endl;
                return;
            }
            else if (key < prv->data)
            {
              prv = prv->left;
            }
            else if (key > prv->data)
            {
                prv = prv->right;
            }
        }
        if(prv == NULL){
            cout << "sorry this key is not found" << endl;
        }
    }
    void searchInBST(int key)
    {
        if (this == NULL)
        {
            cout << "sorry this key is not found" << endl;
        }
        else if (key < this->data)
        {
            this->left->searchInBST(key);
        }
        else if (key > this->data)
        {
            this->right->searchInBST(key);
        }
        else if (key == this->data)
        {
            cout << "yes " << key << " is in this BST" << endl;
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
                  7      */
    // linking nodes of BST
    a4->left = a2;
    a4->right = a6;
    a2->left = a1;
    a2->right = a3;
    a6->left = a5;
    a6->right = a8;
    a8->left = a7;

    cout << "Enter a value to search : " << endl;
    int key = 5;
    // cin >> key ;
    ////// search by recourtion
    cout << "searching for "<< key << " ....." << endl;
    a4->IterativeSearchInBST(key);
    ///////Iterative Search
    a4->searchInBST(key);

    return 0;
}