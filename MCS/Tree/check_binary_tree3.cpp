#include <iostream>

using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;
        Node (int data){
            this->data = data;
            this->left = left;
            this->right = right;
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
        bool CheckBst(Node* root){
            if (root->data < FindMin(root->right) && root->data > FindMax(root->left)){
            return true;
            }
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
    cout << bst.CheckBst(root);
    Node* rootbt = new Node(3);
    rootbt->left = new Node(2);
    rootbt->right = new Node(5);
    rootbt->left->left = new Node(1);
    rootbt->left->right = new Node(4);
    cout << bst.CheckBst(rootbt);
    return 0;
}
