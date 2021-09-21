#include <iostream>
#define INT_MAX 100
#define INT_MIN 0
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;
        Node (int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

class BST {
    public:
        Node* Insert (Node* root, int data){
            if (root == NULL){
                Node* newNode = new Node(data);
                root = newNode;
            }
            else if (data < root->data)
                root->left = Insert(root->left, data);
            else if (data > root->data)
                root->right = Insert(root->right, data);
            return root;
        }
        bool IsBst(Node* root, int max, int min){
            if (root == NULL) 
                return true;
            if (root->data > min && root->data < max && 
                    IsBst(root->left, root->data, min) && IsBst(root->right, max, root->data))
                return true;
            return false;
        }
};

int main(){
    Node* root = NULL;
    BST bst;
    root = bst.Insert(root, 7);
    bst.Insert(root, 4);
    bst.Insert(root, 1);
    bst.Insert(root, 6);
    bst.Insert(root, 9);
    cout << bst.IsBst(root, INT_MAX, INT_MIN);
    cout << "\n";
    Node* rootbt = new Node(3);
    rootbt->left = new Node(2);
    rootbt->right = new Node(5);
    rootbt->left->left = new Node(1);
    rootbt->left->right = new Node(4);
    cout << bst.IsBst(rootbt, INT_MAX, INT_MIN);
    return 0;
}
