#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;
        Node() : data(0), left(nullptr), right(nullptr) {};
        Node(int data) : data(data), left(nullptr), right(nullptr) {};
        Node(int data, Node* left, Node* right) : data(data), left(left), right(right) {};
};

class BST {
    public:
        Node* Insert(Node* root, int data){
            if (root == nullptr){
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
            if (root != nullptr){
                InOrder(root->left);
                cout << root->data << " ";
                InOrder(root->right);
            }
        }
        Node* FindMin(Node* root){
            while (root->left != nullptr)
                root = root->left;
            return root;
        }
        Node* Delete(Node* root, int data){
            if (root == nullptr)
                return root;
            else if (data < root->data)
                root->left = Delete(root->left, data);
            else if (data > root->data)
                root->right = Delete(root->right, data);
            else {
                if (root->left == nullptr && root->right == nullptr){
                    delete root;
                    root = nullptr;
                }
                else if (root->left == nullptr){
                    Node* temp = root;
                    root = root->right;
                    delete temp;
                }
                else if (root->right == nullptr){
                    Node* temp = root;
                    root = root->left;
                    delete temp;
                }
                else {
                    Node* temp = FindMin(root->right);
                    root->data = temp->data;
                    root->right = Delete(root->right, temp->data);
                }
            }
            return root;
        }
};

int main(){
    Node* root = nullptr;
    BST bst;
    root = bst.Insert(root, 10);
    bst.Insert(root, 12);
    bst.Insert(root, 1);
    bst.Insert(root, 20);
    bst.Insert(root, 15);
    bst.Insert(root, 16);
    bst.Insert(root, 26);
    bst.Insert(root, 11);
    bst.Insert(root, 3);
    bst.InOrder(root);
    bst.Delete(root, 15);
    cout << "\n";
    bst.InOrder(root);
    return 0;
}
