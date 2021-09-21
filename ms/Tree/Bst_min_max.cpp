#include <iostream>

using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;
        Node(int data){
            this->data = data;
            left = NULL;
            right = NULL;
        }
};

class BST{
    public:
        Node* Insert(Node* root, int data){
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
        int FindMin(Node* root){
            while (root->left != NULL)
                root = root->left;
            return root->data;
        }
        int FindMax(Node* root){
            while (root->right != NULL)
                root = root->right;
            return root->data;
        }
};

int main(){
    Node* root = NULL;
    BST bst;
    root = bst.Insert(root, 15);
    bst.Insert(root, 10);
    bst.Insert(root, 20);
    bst.Insert(root, 25);
    cout << bst.FindMax(root) << "\n";
    cout << bst.FindMin(root);
    return 0;
}
