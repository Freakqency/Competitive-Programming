#include <iostream>

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
        bool IsLesser(Node* root, int value){
            if (root == NULL)
                return true;
            if (root->data <= value && IsLesser(root->left, value) && IsLesser(root->right, value))
                return true;
            return false;
        }
        bool IsGreater(Node* root, int value){
            if (root == NULL)
                return true;
            if (root->data > value && IsGreater(root->left, value) && IsGreater(root->right, value))
                return true;
            return false;
        }
        bool CheckBst(Node* root){
            if (root == NULL)
                return true;
            if (IsLesser(root->left, root->data) && IsGreater(root->right, root->data) && CheckBst(root->left) && CheckBst(root->right))
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
    Node* rootbt = new Node(3);
    rootbt->left = new Node(2);
    rootbt->right = new Node(5);
    rootbt->left->left = new Node(1);
    rootbt->left->right = new Node(4);
    cout << bst.CheckBst(root) << "\n";
    cout << bst.CheckBst(rootbt);
    return 0;
}
