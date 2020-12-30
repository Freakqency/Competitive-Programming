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
        void InOrder(Node* root){
            if (root == NULL)
                return;
            InOrder(root->left);
            cout << root->data << " ";
            InOrder(root->right);
        }
        bool IsLesser(Node* root, int data){
            if (root == NULL)
                return true;
            if (root->data <= data && IsLesser(root->left, data) && IsLesser(root->right, data))
                return true;
            return false;
        }
        bool IsGreater(Node* root, int data){
            if (root == NULL)
                return true;
            if (root->data > data && IsGreater(root->left, data) && IsGreater(root->right, data))
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
    Node* root = new Node(3);
    BST bst;
    root->left =  new Node(2);
    root->right =  new Node(5);
    root->left->left =  new Node(1);
    root->left->right =  new Node(4);
    Node* rootbst = NULL;
    rootbst = bst.Insert(rootbst, 7);
    bst.Insert(rootbst, 4);
    bst.Insert(rootbst, 1);
    bst.Insert(rootbst, 6);
    bst.Insert(rootbst, 9);
    cout << bst.CheckBst(root) << "\n";
    cout << bst.CheckBst(rootbst);
    return 0;
}
