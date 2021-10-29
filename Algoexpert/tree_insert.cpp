#include<bits/stdc++.h>

using namespace std;


class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

class BT {
    public:
    Node* insert(Node* root, int data) {
        if (root == nullptr) {
            Node* newNode = new Node(data);
            root = newNode;
        }
        else if (data < root->data) 
            root->left = insert(root->left, data);
        else if (data > root->data)
            root->right = insert(root->right, data);
        return root;
    }
    void inorder(Node* root) {
        if (root == nullptr) return;
        inorder(root->left);
        cout << root->data << ' ';
        inorder(root->right);
    }
};


int main() {
    Node* root = nullptr;
    BT bt;
    root = bt.insert(root, 10);
    bt.insert(root, 20);
    bt.insert(root, 30);
    bt.insert(root, 8);
    bt.insert(root, 3);
    bt.inorder(root);
    return 0;
}