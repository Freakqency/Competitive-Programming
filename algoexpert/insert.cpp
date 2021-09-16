#include<bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(): data(0), left(nullptr), right(nullptr) {};
    Node(int data): data(data), left(nullptr), right(nullptr) {};
    Node(int data, Node* left, Node* right): data(data), left(left), right(right) {};
};

class BT {
public:
    Node* insert(Node* root, int data) {
        if (root == nullptr) {
            Node* newRoot = new Node(data);
            root = newRoot;
        }
        else if (data < root->data)
            root->left = insert(root->left, data);
        else if (data > root->data)
            root->right = insert(root->right, data);            
        return root;
    }
    void inOrder(Node* root) {
        inOrder(root->left);
        cout << root->data << ' ';
        inOrder(root->right);
    }
    void preOrder(Node* root) {
        cout << root->data << ' ';
        preOrder(root->left);
        preOrder(root->right);
    }
    void postOrder(Node* root) {
        preOrder(root->left);
        preOrder(root->right);
        cout << root->data << ' ';
    }
};



int main() {
    Node* root = nullptr;
    BT bt;
    root = bt.insert(root, 200);
    bt.insert(root, 220);
    bt.insert(root, 110);
    bt.insert(root, 50);
    bt.insert(root, 500);
    cout << "inOrder";
    bt.inOrder(root);
    return 0;
}