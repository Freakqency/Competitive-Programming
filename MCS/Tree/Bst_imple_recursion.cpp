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
        void Inorder(Node* root){
            if (root == NULL)
                return;
            Inorder(root->left);
            cout << root->data << "->";
            Inorder(root->right);
        }
};

int main(){
    Node* root = NULL;
    BST bst;
    root = bst.Insert(root, 15);
    bst.Insert(root, 10);
    bst.Insert(root, 20);
    bst.Insert(root, 25);
    bst.Insert(root, 19);
    bst.Insert(root, 9);
    bst.Insert(root, 12);
    bst.Inorder(root);
    return 0;
}
